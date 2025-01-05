You are given a 0-indexed string s and a dictionary of words dictionary. You have to break s into one or more non-overlapping substrings such that each substring is present in dictionary. There may be some extra characters in s which are not present in any of the substrings.
Return the minimum number of extra characters left over if you break up s optimally.


solution main function
```cpp
class Solution {
public:
    int solve(string s, vector<string>& dictionary) {

    }
};
```

Example 1:
Input：s = "leetscode", dictionary = ["leet","code","leetcode"]
Output: 1

Example 2:
Input：s = "sayhelloworld", dictionary = ["hello","world"]
Output: 3


Restrictions:
1 <= s.length <= @data
1 <= dictionary.length <= @data
1 <= dictionary[i].length <= 50
dictionary[i] and s consists of only lowercase English letters
dictionary contains distinct words
Time limit: @time_limit ms
Memory limit: @memory_limit KB