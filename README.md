# READE.md

## To Do

**所有的代码都有所修改还没来得及检验！！！！**

最终的展现成功应该是 `\test` 文件夹已经合并到 `\data` 文件夹中，现在还没来得及运行文件。

`run.py` 与 `main.py` 之间的衔接即 `main.py` 中对 `run.py` 的调用有些问题

## py文件的作用

`run.py` 运行测试各项数据

`ask.py` 将 prompt 给 LLM 并提取分离出代码文件储存

`main.py` 通过运行 `ask.py` 与 `run.py` 初步得到结果的 `result.json`

`evaluate.py` 统计 `result.json` 得到最终的通过率的 .csv 文件

`get_testcase.py` 通过 `data` 目录里的 `generator.cpp` 生成测试点的 `.in` 文件

`get_testout.py` 将主目录下的 `execute.h` 复制到 `data` 中各个题目的目录下，并运行 std 得到测试点的输出结果

## 文件总体目录

```txt
结构：
根目录
    final_result
        model_name({"gpt,deepseek..."}).csv
    init
        execute.h
        __init__.py
        prompt.txt
        .env
        .model.yaml
        limit.json
    data
        题目id
            desc
                description.md
                description_zh.md
            generate
                execute.h
                generator.cpp
                std.h
                test.cpp
                test.json
            testcase
                level_id={1,2,3...}
                    (.in,.out)
            result
                model_m=name={"gpt,deepseek..."}
                    pass_k={1,2,3,4...}
                        code.cpp
                        result.json
            problem.json
        data.csv
        data_csv_to_files.py
    get_testcases.py
    get_testout.py
    ask.py
    run.py
    main.py
    evaluate.py
```

## data目录

'data_csv_to_files.py' 可以从csv文件读入，以特定方式存储文件 '/data' 目录下：

```sh
leetcode1
│  problem.json
│
├─desc
│      description.md
│      description_zh.md
│
└─generate
        generator.cpp
        std.h
        test.cpp
        test.json
```