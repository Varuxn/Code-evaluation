# READE.md

`run.py` 运行测试各项数据

`ask.py` 将 prompt 给 LLM 并提取分离出代码文件储存

上面两个还没整过来

`get_testcase.py` 通过 `data` 目录里的 `generator.cpp` 生成测试点的 `.in` 文件

`get_testout.py` 将主目录下的 `execute.h` 复制到 `data` 中各个题目的目录下，并运行 std 得到测试点的输出结果



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
