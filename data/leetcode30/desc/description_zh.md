DNA序列 由一系列核苷酸组成，缩写为 'A', 'C', 'G' 和 'T'.。
    例如，"ACGAATTCCG" 是一个 DNA序列 。
在研究 DNA 时，识别 DNA 中的重复序列非常有用。
给定一个表示 DNA序列 的字符串 s ，返回所有在 DNA 分子中出现不止一次的 长度为 10 的序列(子字符串)。你可以按 任意顺序 返回答案。

solution内主函数
```cpp
class Solution {
public:
    vector<string> solve(string s) {

    }
};
```
样例1：
Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
Output: ["AAAAACCCCC","CCCCCAAAAA"]

样例2：
Input：s = "AAAAAAAAAAAAA"
Output: ["AAAAAAAAAA"]

限制：
0 <= s.length <= @data
s[i]=='A'、'C'、'G' or 'T'
时间限制：@time_limit ms
内存限制：@memory_limit KB