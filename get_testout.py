import os
import shutil
import subprocess

def copy_execute_file(selected_problems=None):
    """
    Copy the initial `execute.h` file from `example` directory to the target problem's `generate` directory.
    """
    execute_file = "init/execute.h"  # Update to source path for `execute.h`
    data_dir = "data"

    if not os.path.isfile(execute_file):
        print(f"{execute_file} not found in the `example` directory.")
        return

    for problem_id in os.listdir(data_dir):
        if selected_problems and problem_id != selected_problems:
            continue
        problem_generate_dir = os.path.join(data_dir, problem_id, "generate")

        if os.path.isdir(problem_generate_dir):
            dest_file = os.path.join(problem_generate_dir, "execute.h")
            shutil.copy(execute_file, dest_file)
            print(f"Copied {execute_file} to {problem_generate_dir}")

def run_tests_and_generate_outputs(selected_problems=None):
    """
    Compile `test.cpp` and execute it to generate `.out` files from `.in` files for selected problems.
    """
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

        # Check if test.cpp exists
        test_cpp_path = os.path.join(problem_generate_dir, "test.cpp")
        if not os.path.isfile(test_cpp_path):
            print(f"Skipping {problem_id}: test.cpp not found.")
            continue

        # Compile test.cpp
        executable_path = os.path.join(problem_generate_dir, "test_executable")  # Compile to generate directory
        compile_cmd = ["g++", test_cpp_path, "-o", executable_path]
        try:
            subprocess.run(compile_cmd, check=True)
            print(f"Compiled test.cpp for {problem_id} into {problem_generate_dir}.")
        except subprocess.CalledProcessError as e:
            print(f"Compilation failed for {problem_id}: {e}")
            continue

        # Iterate through test folders and generate outputs
        for subfolder in os.listdir(test_problem_dir):
            subfolder_path = os.path.join(test_problem_dir, subfolder)

            if os.path.isdir(subfolder_path):
                for input_file in os.listdir(subfolder_path):
                    if input_file.endswith(".in"):
                        input_file_path = os.path.join(subfolder_path, input_file)
                        output_file_path = os.path.join(subfolder_path, f"{os.path.splitext(input_file)[0]}.out")

                        # Execute the compiled test program
                        try:
                            with open(input_file_path, "r") as infile, open(output_file_path, "w") as outfile:
                                subprocess.run(
                                    [executable_path],
                                    stdin=infile,
                                    stdout=outfile,
                                    check=True
                                )
                            print(f"Generated output for {problem_id}, input file: {input_file}")
                        except subprocess.CalledProcessError as e:
                            print(f"Error running test for {problem_id}, input file: {input_file}: {e}")

def delete_test_executable_result_files():
    """
    Delete all files in the root directory that start with `test_executable_result` and have `.txt` extension.
    """
    root_dir = "."  # Root directory
    prefix = "test_executable_result"
    extension = ".txt"

    for file_name in os.listdir(root_dir):
        if file_name.startswith(prefix) and file_name.endswith(extension):
            file_path = os.path.join(root_dir, file_name)
            if os.path.isfile(file_path):
                os.remove(file_path)
                print(f"Deleted file: {file_path}")

def deal_problem(selected_problems=None):
    """
    Perform all steps to process problems: copy `execute.h`, generate outputs, and clean up temporary files.
    """
    # Step 1: Copy execute.h
    copy_execute_file(selected_problems)

    # Step 2: Run tests and generate outputs
    run_tests_and_generate_outputs(selected_problems)

    # Step 3: Clean up temporary files
    delete_test_executable_result_files()

if __name__ == "__main__":
    deal_problem('luogu13')  # Process a specific problem, or use `None` to process all problems.
