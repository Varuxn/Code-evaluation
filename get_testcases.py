import os
import json
import subprocess

def generate_test_cases(selected_problems=None):
    """
    Generate test cases for problems in the data directory.

    :param selected_problems: List of problem IDs to process. If None, process all problems.
    """
    data_dir = "data"

    for problem_id in os.listdir(data_dir):
        # 如果指定了问题列表，跳过未列出的问题
        if selected_problems and problem_id != selected_problems:
            continue

        problem_path = os.path.join(data_dir, problem_id)
        generate_path = os.path.join(problem_path, "generate")
        testcase_dir = os.path.join(problem_path, "testcase")
        generator_cpp_path = os.path.join(generate_path, "generator.cpp")
        test_json_path = os.path.join(generate_path, "test.json")

        # 检查必要文件是否存在
        if not os.path.isfile(generator_cpp_path) or not os.path.isfile(test_json_path):
            print(f"Skipping {problem_id}: Required files not found in 'generate'.")
            continue

        # 读取 test.json
        with open(test_json_path, "r", encoding="utf-8") as f:
            try:
                test_data = json.load(f)
            except json.JSONDecodeError as e:
                print(f"Error reading test.json for {problem_id}: {e}")
                continue

        # 编译 generator.cpp
        generator_exe_path = os.path.join(generate_path, "generator")
        compile_cmd = ["g++", generator_cpp_path, "-o", generator_exe_path]
        try:
            subprocess.run(compile_cmd, check=True)
            print(f"Compiled generator.cpp for {problem_id}.")
        except subprocess.CalledProcessError as e:
            print(f"Compilation failed for {problem_id}: {e}")
            continue

        # 遍历 test.json 中的测试用例
        for idx, item in enumerate(test_data):
            level_id = idx + 1  # 根据索引生成 level_id (从 1 开始)
            n_value = item.get("N")  # 从 test.json 获取 N 的值
            if n_value is None:
                print(f"Skipping {problem_id} test case {idx}: 'N' not found.")
                continue

            # 创建 level_id 对应的目录
            level_dir = os.path.join(testcase_dir, f"level_id={level_id}")
            os.makedirs(level_dir, exist_ok=True)

            # 生成测试点
            test_case_count = 5  # 每个 level_id 生成的测试点数
            for test_idx in range(test_case_count):
                input_file_path = os.path.join(level_dir, f"{test_idx}.in")
                try:
                    with open(input_file_path, "w", encoding="utf-8") as input_file:
                        # 调用生成器生成测试点
                        run_cmd = [generator_exe_path, str(n_value)]
                        subprocess.run(run_cmd, stdout=input_file, check=True)
                    print(f"Generated test case {test_idx} for {problem_id}, level_id={level_id}, N={n_value}.")
                except subprocess.CalledProcessError as e:
                    print(f"Error generating test case {test_idx} for {problem_id}, level_id={level_id}, N={n_value}: {e}")
                except IOError as e:
                    print(f"Error writing test case {test_idx} for {problem_id}, level_id={level_id}, N={n_value}: {e}")

if __name__ == "__main__":
    # 示例用法：处理所有问题
    generate_test_cases()

    # 示例用法：仅处理指定问题
    # generate_test_cases(selected_problems=["problem1", "problem2"])
