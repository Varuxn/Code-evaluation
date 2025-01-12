import os
import shutil
import pandas as pd
import chardet
import json
from concurrent.futures import ThreadPoolExecutor
from ask import ask, models_list
from run import run_all
from init import problem_path, template_path, data_path

# 检测文件编码
with open(data_path + '/data.csv', 'rb') as f:
    encoding = chardet.detect(f.read())['encoding']


def process_row(row: dict):
    """
    处理单行数据的函数，负责完成每个问题的创建和生成, row为字典类型
    """
    # 确保目标路径存在
    if not os.path.exists(problem_path):
        os.makedirs(problem_path)

    # 解析行数据
    id = row['id']
    desc = row['desc']
    desc_zh = row['desc_zh']
    data = list(map(int, row['data'].split()))
    time_limit = int(row['time_limit'])
    memory_limit = list(map(int, row['memory_limit'].split()))
    std = row['std']
    test_cpp = row['test']
    cate = row['cate']
    difficulty = row['difficulty']

    # 数据完整性校验
    if not all([desc, desc_zh, data, time_limit, memory_limit, std, test_cpp, cate, difficulty]):
        raise ValueError(f'Incomplete data for problem {id}')

    std_header = f'#ifndef STD_H\n#define STD_H\n#include <bits/stdc++.h>\nusing namespace std;\n\n{std}\n\n#endif'

    # 针对不同内存限制生成题目版本
    for level in range(len(memory_limit)):
        problem_level_path = os.path.join(problem_path, str(id), str(level))
        test_case_path = os.path.join(data_path, 'test_cases', str(id))

        # 检查是否需要重新创建或更新问题
        flag = False
        flag1 = False

        if not os.path.exists(problem_level_path):
            flag = True
            shutil.copytree(template_path, problem_level_path)

        def update_file(file_path, content):
            """更新文件内容，如果有变更则标记为需要更新"""
            nonlocal flag
            full_path = os.path.join(problem_level_path, file_path)
            if not os.path.exists(full_path) or open(full_path).read() != content:
                with open(full_path, 'w', encoding='utf-8') as f:
                    f.write(content)
                flag = True

        def update_json(file_path, content):
            """更新JSON文件内容，如果有变更则标记为需要更新"""
            nonlocal flag
            full_path = os.path.join(problem_level_path, file_path)
            if not os.path.exists(full_path) or json.load(open(full_path, encoding='utf-8')) != content:
                with open(full_path, 'w', encoding='utf-8') as f:
                    json.dump(content, f, indent=4, ensure_ascii=False)
                flag = True

        update_file('codes/std.h', std_header)
        update_file('exec/test.cpp', test_cpp)
        update_file('desc/desc.txt', desc.replace('@data', str(data[level])))
        update_file('desc/desc_zh.txt', desc_zh.replace('@data', str(data[level])))

        problem_json = {
            'time_limit': time_limit,
            'memory_limit': memory_limit[level],
            'cate': cate,
            'difficulty': difficulty
        }
        update_json('problem.json', problem_json)

        if os.path.exists(test_case_path):
            cases_path = os.path.join(problem_level_path, 'cases')
            if not os.path.exists(cases_path) or len(os.listdir(cases_path)) != len(os.listdir(test_case_path)):
                flag1 = True
                shutil.rmtree(cases_path, ignore_errors=True)
                shutil.copytree(test_case_path, cases_path)
        else:
            raise FileNotFoundError(f'Test cases for problem {id} not found')

        if flag or flag1:
            print(f"Problem {id}, level {level} updated")
            ask(f"{id}/{level}")
            run_all(f"{id}/{level}")
            # model_names = models_list if flag else tem_model_list
            # if model_names:
            #     run_all(id, model_names=model_names)


def create_problem(name: str = None, op: bool = False):
    """
    创建题目并生成对应的数据，支持单线程和多线程模式
    """
    test_cases_path = os.path.join(data_path, 'test_cases')
    if not os.path.exists(test_cases_path):
        zip_path = os.path.join(data_path, 'test_cases.zip')
        if not os.path.exists(zip_path):
            raise FileNotFoundError('Test cases not found')
        shutil.unpack_archive(zip_path, test_cases_path)

    df = pd.read_csv(os.path.join(data_path, 'data.csv'), encoding=encoding)
    if name:
        row = df[df['id'] == name]
        if row.empty:
            raise ValueError(f'Problem {name} not found')
        process_row(row.to_dict(orient='records')[0])
    else:
        if op:
            with ThreadPoolExecutor(max_workers=4) as executor:
                executor.map(process_row, df.to_dict(orient='records'))
        else:
            for _, row in df.iterrows():
                process_row(row)

    shutil.rmtree(test_cases_path)


if __name__ == '__main__':
    print(f"Enabled models: {models_list}")
    create_problem(name='leetcode19', op=False)
