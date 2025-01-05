Given a string s and a dictionary of strings wordDict, return true if s can be segmented into a space-separated sequence of one or more dictionary words.
Note that the same word in the dictionary may be reused multiple times in the segmentation.

solution main function
```cpp
class Solution {
public:
    bool solve(string s, vector<string>& wordDict) {

    }
};
```

Example 1:
Input: s = "leetcode", wordDict = ["leet","code"]
Output: true

Example 2:
Input: s = "applepenapple", wordDict = ["apple","pen"]
Output: true


Restrictions:
1 <= s.length <= data
1 <= wordDict.length <= data
1 <= wordDict[i].length <= 20
s and wordDict[i] consist of only lowercase English letters.
All the strings of wordDict are unique.
Time limit: @time_limit ms
Memory limit: @memory_limit KB