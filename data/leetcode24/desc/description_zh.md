给你一个字符串 s 和一个字符串列表 wordDict 作为字典。如果可以利用字典中出现的一个或多个单词拼接出 s 则返回 true。
注意：不要求字典中出现的单词全部都使用，并且字典中的单词可以重复使用。

solution内主函数
```cpp
class Solution {
public:
    bool solve(string s, vector<string>& wordDict) {

    }
};
```

样例1：
Input：s = "leetcode", wordDict = ["leet", "code"]
Output: true

样例2：
Input：s = "applepenapple", wordDict = ["apple", "pen"]
Output: true

限制：
1 <= s.length <= @data
1 <= wordDict.length <= data
1 <= wordDict[i].length <= 20
s 和 wordDict[i] 仅由小写英文字母组成
wordDict 中的所有字符串 互不相同
时间限制：@time_limit ms
内存限制：@memory_limit KB