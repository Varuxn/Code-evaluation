import os
import json
import subprocess

def generate_test_cases():
    data_dir = "data"
    test_dir = "test"

    # 确保目标测试文件夹存在
    os.makedirs(test_dir, exist_ok=True)

    for problem_id in os.listdir(data_dir):
        problem_path = os.path.join(data_dir, problem_id)
        generate_path = os.path.join(problem_path, "generate")
        generator_cpp_path = os.path.join(generate_path, "generator.cpp")
        test_json_path = os.path.join(generate_path, "test.json")

        # 检查必要的文件是否存在
        if not os.path.isfile(generator_cpp_path) or not os.path.isfile(test_json_path):
            print(f"Skipping {problem_id}: generator.cpp or test.json not found.")
            continue

        # 读取 test.json
        with open(test_json_path, "r", encoding="utf-8") as f:
            try:
                test_data = json.load(f)
            except json.JSONDecodeError as e:
                print(f"Error reading test.json for {problem_id}: {e}")
                continue

        # 创建对应的测试文件夹
        problem_test_dir = os.path.join(test_dir, problem_id)
        os.makedirs(problem_test_dir, exist_ok=True)

        # 获取参数 N 并为每个 N 创建文件夹
        for idx, item in enumerate(test_data):
            n_value = item.get("N")
            if n_value is None:
                print(f"Skipping {problem_id} test case {idx}: 'N' not found.")
                continue

            n_test_dir = os.path.join(problem_test_dir, str(idx))
            os.makedirs(n_test_dir, exist_ok=True)

            # 编译 generator.cpp
            generator_exe_path = os.path.join(generate_path, "generator")
            compile_cmd = ["g++", generator_cpp_path, "-o", generator_exe_path]
            try:
                subprocess.run(compile_cmd, check=True)
            except subprocess.CalledProcessError as e:
                print(f"Compilation failed for {problem_id}: {e}")
                continue

            # 生成测试点
            test_case_count = 5  # 设置为每个 N 生成的测试点数
            for test_idx in range(test_case_count):
                input_file_path = os.path.join(n_test_dir, f"{test_idx}.in")
                try:
                    with open(input_file_path, "w", encoding="utf-8") as input_file:
                        # 使用 generator 生成测试点
                        run_cmd = [generator_exe_path, str(n_value)]
                        subprocess.run(run_cmd, stdout=input_file, check=True)
                except subprocess.CalledProcessError as e:
                    print(f"Error generating test case {test_idx} for {problem_id}, N={n_value}: {e}")
                except IOError as e:
                    print(f"Error writing test case {test_idx} for {problem_id}, N={n_value}: {e}")

if __name__ == "__main__":
    generate_test_cases()
