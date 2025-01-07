import os
import shutil
import subprocess

def copy_execute_file(selected_problems=None):
    execute_file = "execute.h"
    data_dir = "data"

    if not os.path.isfile(execute_file):
        print(f"{execute_file} not found in the root directory.")
        return

    for problem_id in os.listdir(data_dir):
        if selected_problems and problem_id != selected_problems:
            continue
        problem_generate_dir = os.path.join(data_dir, problem_id, "generate")

        if os.path.isdir(problem_generate_dir):
            dest_file = os.path.join(problem_generate_dir, "execute.h")
            if not os.path.isfile(dest_file):
                shutil.copy(execute_file, dest_file)
                print(f"Copied {execute_file} to {problem_generate_dir}")
            else:
                print(f"{execute_file} already exists in {problem_generate_dir}")

def run_tests_and_generate_outputs(selected_problems=None):
    data_dir = "data"
    test_dir = "test"

    for problem_id in os.listdir(data_dir):
        if selected_problems and problem_id != selected_problems:
            continue
        problem_generate_dir = os.path.join(data_dir, problem_id, "generate")
        test_problem_dir = os.path.join(test_dir, problem_id)

        if not os.path.isdir(problem_generate_dir) or not os.path.isdir(test_problem_dir):
            print(f"Skipping {problem_id}: required directories not found.")
            continue

        # 检查 test.cpp 是否存在
        test_cpp_path = os.path.join(problem_generate_dir, "test.cpp")
        if not os.path.isfile(test_cpp_path):
            print(f"Skipping {problem_id}: test.cpp not found.")
            continue

       # 编译 test.cpp
        root_executable_path = "test_executable"  # 编译后的文件保存在根目录
        compile_cmd = ["g++", test_cpp_path, "-o", root_executable_path]  # 编译命令，输出到根目录
        try:
            subprocess.run(compile_cmd, check=True)
            print(f"Compiled test.cpp for {problem_id} into root directory.")
        except subprocess.CalledProcessError as e:
            print(f"Compilation failed for {problem_id}: {e}")
            continue

        # 遍历 test 文件夹中的输入子文件夹
        for subfolder in os.listdir(test_problem_dir):
            subfolder_path = os.path.join(test_problem_dir, subfolder)

            if os.path.isdir(subfolder_path):
                for input_file in os.listdir(subfolder_path):
                    if input_file.endswith(".in"):
                        input_file_path = os.path.join(subfolder_path, input_file)
                        output_file_path = os.path.join(subfolder_path, f"{os.path.splitext(input_file)[0]}.out")
                        test_index = os.path.splitext(input_file)[0]  # 当前测试编号

                        # 运行测试程序并生成输出
                        with open(input_file_path, "r") as infile, open(output_file_path, "w") as outfile:
                            try:
                                subprocess.run(
                                    ["./test_executable", input_file, test_index],  # 不包含重定向符号
                                    stdin=infile,           # 指定输入文件
                                    stdout=outfile,         # 指定输出文件
                                    check=True
                                )
                                print(f"Generated output for {problem_id}, input file: {input_file}")
                            except subprocess.CalledProcessError as e:
                                print(f"Error running test for {problem_id}, input file: {input_file}: {e}")
def delete_test_executable_result_files():
    root_dir = "."  # 根目录
    prefix = "test_executable_result"
    extension = ".txt"

    for file_name in os.listdir(root_dir):
        # 检查文件是否以指定前缀和扩展名结尾
        if file_name.startswith(prefix) and file_name.endswith(extension):
            file_path = os.path.join(root_dir, file_name)
            if os.path.isfile(file_path):  # 确保是文件
                os.remove(file_path)
                print(f"Deleted file: {file_path}")

def deal_problem(selected_problems=None):
    # Step 1: Copy execute.h
    copy_execute_file(selected_problems)

    # Step 2: Run tests and generate outputs
    run_tests_and_generate_outputs(selected_problems)

    delete_test_executable_result_files()

if __name__ == "__main__":

    deal_problem('luogu13')