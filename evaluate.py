import os
import json
import csv

# 加载默认限制配置
with open("init/limit.json", "r", encoding="utf-8") as f:
    limit = json.load(f)
default_time_limits = limit.get("time_limit", [500.0, 1000.0, 2000.0])
default_memory_limits = limit.get("memory_limit", [6400, 640, 64])

def get_limits(problem_id):
    """
    获取题目的时间限制和内存限制。
    如果题目中未定义有效限制，则使用默认限制。
    """
    problem_path = f"data/{problem_id}/problem.json"
    try:
        with open(problem_path, "r", encoding="utf-8") as f:
            problem_data = json.load(f)
            time_limits = problem_data.get("time_limit", [])
            memory_limits = problem_data.get("memory_limit", [])
            if len(time_limits) == 3 and len(memory_limits) == 3:
                return time_limits, memory_limits
    except (FileNotFoundError, json.JSONDecodeError):
        pass
    return default_time_limits, default_memory_limits

def evaluate_problem(problem_id, model_name):
    """
    评估单个题目的模型性能，生成统计结果。
    :param problem_id: 题目编号
    :param model_name: 模型名称
    :return: 评估结果的表格数据
    """
    time_limits, memory_limits = get_limits(problem_id)
    problem_path = f"data/{problem_id}"
    result_dir = f"{problem_path}/result/{model_name}"

    # 获取题目信息
    problem_file = f"{problem_path}/problem.json"
    with open(problem_file, "r", encoding="utf-8") as f:
        problem_data = json.load(f)
    label = problem_data.get("cate", "Unknown")
    difficulty = problem_data.get("difficulty", "Unknown")

    # 初始化结果表格
    row = [problem_id, label, difficulty]
    pass_rates = []

    # 遍历 pass_k 文件夹
    for pass_k in sorted(os.listdir(result_dir)):
        if not pass_k.startswith("pass_"):
            continue

        pass_k_dir = os.path.join(result_dir, pass_k)
        result_file = os.path.join(pass_k_dir, "result.json")
        if not os.path.exists(result_file):
            continue

        with open(result_file, "r", encoding="utf-8") as f:
            results = json.load(f)

        # 计算 3x3 数据矩阵
        matrix = [[0] * 3 for _ in range(3)]  # 通过数
        total = [[0] * 3 for _ in range(3)]  # 总测试点数

        for case in results:
            case_result = case["result"]
            time_used = case["time_used"]
            memory_used = case["memory_used"]

            for i, time_limit in enumerate(time_limits):
                for j, memory_limit in enumerate(memory_limits):
                    total[i][j] += 1
                    if (
                        case_result == "Accepted"
                        and time_used <= time_limit
                        and memory_used <= memory_limit
                    ):
                        matrix[i][j] += 1

        # 计算通过率
        for i in range(3):
            for j in range(3):
                if total[i][j] > 0:
                    pass_rate = matrix[i][j] / total[i][j]
                else:
                    pass_rate = 0.0
                pass_rates.append(pass_rate)

    row.extend(pass_rates)
    return row

def save_to_csv(data, model_name):
    """
    将评估结果保存为 CSV 文件。
    :param data: 表格数据
    :param model_name: 模型名称
    """
    output_dir = "final_result"
    os.makedirs(output_dir, exist_ok=True)
    output_file = os.path.join(output_dir, f"{model_name}.csv")

    # 写入 CSV 文件
    headers = [
        "id", "label", "difficulty",
        "(time_limit_1, memory_limit_1)", "(time_limit_1, memory_limit_2)", "(time_limit_1, memory_limit_3)",
        "(time_limit_2, memory_limit_1)", "(time_limit_2, memory_limit_2)", "(time_limit_2, memory_limit_3)",
        "(time_limit_3, memory_limit_1)", "(time_limit_3, memory_limit_2)", "(time_limit_3, memory_limit_3)"
    ]
    with open(output_file, "w", encoding="utf-8", newline="") as f:
        writer = csv.writer(f)
        writer.writerow(headers)
        writer.writerows(data)

def evaluate_all():
    """
    评估所有题目和所有模型。
    """
    data_dir = "data"
    for problem_id in sorted(os.listdir(data_dir)):
        problem_path = os.path.join(data_dir, problem_id)
        if not os.path.isdir(problem_path):
            continue

        result_dir = os.path.join(problem_path, "result")
        if not os.path.exists(result_dir):
            continue

        for model_name in sorted(os.listdir(result_dir)):
            model_path = os.path.join(result_dir, model_name)
            if os.path.isdir(model_path):
                row = evaluate_problem(problem_id, model_name)
                save_to_csv([row], model_name)

if __name__ == "__main__":
    import argparse

    parser = argparse.ArgumentParser(description="Evaluate model results.")
    parser.add_argument("--problem_id", type=str, help="Specify the problem ID to evaluate.")
    parser.add_argument("--model_name", type=str, help="Specify the model name to evaluate.")
    args = parser.parse_args()

    if args.problem_id and args.model_name:
        # 评估指定题目和模型
        row = evaluate_problem(args.problem_id, args.model_name)
        save_to_csv([row], args.model_name)
    else:
        # 评估所有题目和模型
        evaluate_all()
