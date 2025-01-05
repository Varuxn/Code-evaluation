给你一个下标从 0 开始的字符串 s 和一个单词字典 dictionary 。你需要将 s 分割成若干个 互不重叠 的子字符串，每个子字符串都在 dictionary 中出现过。s 中可能会有一些 额外的字符 不在任何子字符串中。
请你采取最优策略分割 s ，使剩下的字符 最少 。

solution内主函数
```cpp
class Solution {
public:
    int solve(string s, vector<string>& dictionary) {

    }
};
```

样例1：
Input：s = "leetscode", dictionary = ["leet","code","leetcode"]
Output: 1

样例2：
Input：s = "sayhelloworld", dictionary = ["hello","world"]
Output: 3

限制：
1 <= s.length <= @data
1 <= dictionary.length <= @data
1 <= dictionary[i].length <= 50
dictionary[i] 和 s 只包含小写英文字母。
dictionary 中的单词互不相同。
时间限制：@time_limit ms
内存限制：@memory_limit KB