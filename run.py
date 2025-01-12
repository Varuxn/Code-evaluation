import os
import json
from concurrent.futures import ThreadPoolExecutor

# 加载默认限制配置
with open("init/limit.json", "r", encoding="utf-8") as f:
    limit = json.load(f)
default_time_limit = max(limit.get("time_limit", [500.0, 1000.0, 2000.0]))  # 最大值
default_memory_limit = max(limit.get("memory_limit", [6400, 640, 64]))      # 最大值

def get_limits(problem_id: str):
    """
    获取指定题目的时间限制和内存限制，优先从 problem.json 中读取。
    :param problem_id: 题目 ID
    :return: (time_limit, memory_limit)
    """
    problem_path = f"data/{problem_id}/problem.json"
    try:
        with open(problem_path, "r", encoding="utf-8") as f:
            problem_data = json.load(f)
            time_limit = problem_data.get("time_limit", [])
            memory_limit = problem_data.get("memory_limit", [])
            if len(time_limit) == 3 and len(memory_limit) == 3:
                return max(time_limit), max(memory_limit)
    except (FileNotFoundError, json.JSONDecodeError):
        pass
    return default_time_limit, default_memory_limit

def run_model(problem_id: str, model_name: str, pass_k: int):
    """
    评测单个模型代码
    :param problem_id: 题目 ID
    :param model_name: 模型名称
    :param pass_k: 测试的 k 值
    """
    time_limit, memory_limit = get_limits(problem_id)
    problem_path = f"data/{problem_id}"
    testcase_path = f"{problem_path}/testcase"
    result_path = f"{problem_path}/result/{model_name}/pass_{pass_k}/result.json"
    
    if not os.path.exists(os.path.dirname(result_path)):
        os.makedirs(os.path.dirname(result_path))
    
    results = []

    # 遍历测试点
    for case_id in sorted(os.listdir(testcase_path)):
        case_path = os.path.join(testcase_path, case_id)
        input_file = os.path.join(case_path, f"{case_id}.in")
        output_file = os.path.join(case_path, f"{case_id}.out")

        # 模拟评测结果（这里可以添加具体的执行逻辑）
        result = {
            "case": case_id,
            "result": "Accepted",  # 或其他结果，例如 "Wrong Answer"
            "time_used": 0,       # 模拟时间
            "memory_used": 0      # 模拟内存
        }
        results.append(result)

    # 保存结果到 JSON 文件
    with open(result_path, "w", encoding="utf-8") as f:
        json.dump(results, f, ensure_ascii=False, indent=4)

def run_all(problem_id: str, model_names: list = None):
    """
    评测全部或指定模型代码
    :param problem_id: 题目 ID
    :param model_names: 指定评测的模型列表，为 None 则评测全部模型
    """
    problem_path = f"data/{problem_id}"
    models_path = f"{problem_path}/result"

    # 如果未指定模型，获取所有模型目录
    if model_names is None:
        model_names = [d for d in os.listdir(models_path) if os.path.isdir(os.path.join(models_path, d))]

    # 并发评测每个模型的所有 pass_k 配置
    with ThreadPoolExecutor(max_workers=2) as executor:
        for model_name in model_names:
            for pass_k in range(1, 6):  # 假设 pass_k 范围为 1 到 5
                executor.submit(run_model, problem_id, model_name, pass_k)
