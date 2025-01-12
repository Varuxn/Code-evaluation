import os
import yaml
import concurrent.futures
from openai import OpenAI
from dotenv import load_dotenv
from init import model_path, problem_path
import re

# 加载环境变量
load_dotenv()

# 加载模型配置
with open(model_path, 'r', encoding='utf-8') as file:
    models_config = yaml.load(file, Loader=yaml.FullLoader)

models_list = [
    model for model in list(models_config.keys()) 
    if models_config[model].get('enabled', False)
]

# 加载提示内容
prompt_file_path = os.path.join(os.path.dirname(model_path), "prompt.txt")
with open(prompt_file_path, 'r', encoding='utf-8') as f:
    prompt = f.read()

def get_code(question: str, model: str, api_key: str, base_url: str):
    """
    调用指定大模型 API 生成代码
    """
    api_key = os.getenv(api_key)
    if api_key is None:
        raise ValueError('API Key not found')
    
    client = OpenAI(api_key=api_key, base_url=base_url)
    chat_completion = client.chat.completions.create(
        messages=[
            {"role": "system", "content": prompt},
            {"role": "user", "content": question}
        ],
        model=model,
    )
    
    # 提取代码并处理为 C++ 格式
    code = chat_completion.choices[0].message.content
    code = 'class Solution' + code.split('class Solution')[-1]
    code = code.split('```')[0]
    tem_name = re.sub(r'[^a-zA-Z0-9_]', '_', model).upper()
    code = f'#ifndef {tem_name}_H\n#define {tem_name}_H\n#include <bits/stdc++.h>\nusing namespace std;\n\n{code}\n\n#endif'

    return code

def ask(problem_id: str, models_list: list = models_list):
    """
    调用所有启用的大模型生成指定问题的代码
    """
    problem_dir = os.path.join(problem_path, problem_id)
    if not os.path.exists(problem_dir):
        raise ValueError(f'Problem not found: {problem_id}')

    desc_path = os.path.join(problem_dir, 'desc', 'description.md')
    if not os.path.exists(desc_path):
        raise ValueError(f'Description not found for problem: {problem_id}')

    with open(desc_path, 'r', encoding='utf-8') as f:
        problem_description = f.read()

    result_dir = os.path.join(problem_dir, 'result')
    os.makedirs(result_dir, exist_ok=True)

    def save_code(model: str):
        enabled = models_config[model]['enabled']
        if not enabled:
            return
        api_key = models_config[model]['api_key']
        if api_key is None:
            raise ValueError(f'API Key not found for model: {model}')
        base_url = models_config[model]['base_url']
        
        # 调用模型生成代码
        cpp_code = get_code(problem_description, model, api_key, base_url)
        
        model_dir = os.path.join(result_dir, model)
        os.makedirs(model_dir, exist_ok=True)

        # 存储代码到模型文件夹
        code_file_path = os.path.join(model_dir, 'code.cpp')
        with open(code_file_path, 'w', encoding='utf-8') as f:
            f.write(cpp_code)

    # 使用多线程调用模型
    with concurrent.futures.ThreadPoolExecutor() as executor:
        executor.map(save_code, models_list)

if __name__ == '__main__':
    print(f'Enabled models: {models_list}')
