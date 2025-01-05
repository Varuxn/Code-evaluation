import os
import json
import pandas as pd

def create_problem_files(csv_file):
    # 读取CSV文件
    df = pd.read_csv(csv_file)

    for index, row in df.iterrows():
        try:
            # 创建以ID命名的文件夹
            folder_name = str(row['id'])
            os.makedirs(folder_name, exist_ok=True)

            # 创建problem.json文件
            problem_data = {
                "time_limit": row['time_limit'],
                "memory_limit": [int(x) for x in str(row['memory_limit']).split()],
                "cate": row['cate'],
                "difficulty": row['difficulty']
            }
            problem_json_path = os.path.join(folder_name, 'problem.json')
            with open(problem_json_path, 'w', encoding='utf-8') as f:
                json.dump(problem_data, f, indent=4)

            # 创建desc文件夹
            desc_folder = os.path.join(folder_name, 'desc')
            os.makedirs(desc_folder, exist_ok=True)

            # 写入description.md和description_zh.md
            with open(os.path.join(desc_folder, 'description.md'), 'w', encoding='utf-8') as f:
                f.write(row['desc'])

            with open(os.path.join(desc_folder, 'description_zh.md'), 'w', encoding='utf-8') as f:
                f.write(row['desc_zh'])

            # 创建generate文件夹
            generate_folder = os.path.join(folder_name, 'generate')
            os.makedirs(generate_folder, exist_ok=True)

            # 写入generator.cpp
            with open(os.path.join(generate_folder, 'generator.cpp'), 'w', encoding='utf-8') as f:
                f.write(row['generator'])

            # 写入std.h
            with open(os.path.join(generate_folder, 'std.h'), 'w', encoding='utf-8') as f:
                f.write(row['std'])

            # 写入test.cpp
            with open(os.path.join(generate_folder, 'test.cpp'), 'w', encoding='utf-8') as f:
                f.write(row['test'])

            # 创建test.json
            test_data = [{"N": int(x)} for x in str(row['data']).split()]
            test_json_path = os.path.join(generate_folder, 'test.json')
            with open(test_json_path, 'w', encoding='utf-8') as f:
                json.dump(test_data, f, indent=4)

            # 写入mem_std.h（如果有数据）
            if pd.notna(row['mem_std']):
                mem_std_path = os.path.join(generate_folder, 'mem_std.h')
                with open(mem_std_path, 'w', encoding='utf-8') as f:
                    f.write(row['mem_std'])

        except ValueError as e:
            print(f"Error processing row with id {row['id']}: {e}")

if __name__ == "__main__":
    csv_file = "data.csv"  # 替换为你的CSV文件路径
    create_problem_files(csv_file)
