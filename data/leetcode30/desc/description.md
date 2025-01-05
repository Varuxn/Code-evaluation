The DNA sequence is composed of a series of nucleotides abbreviated as 'A', 'C', 'G', and 'T'.
    For example, "ACGAATTCCG" is a DNA sequence.
When studying DNA, it is useful to identify repeated sequences within the DNA.
Given a string s that represents a DNA sequence, return all the 10-letter-long sequences (substrings) that occur more than once in a DNA molecule. You may return the answer in any order.

solution main function
```cpp
class Solution {
public:
    vector<string> solve(string s) {

    }
};
```

Example 1:
Input: s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
Output: ["AAAAACCCCC","CCCCCAAAAA"]

Example 2:
Input: s = "AAAAAAAAAAAAA"
Output: ["AAAAAAAAAA"]

Restrictions:
1 <= s.length <= @data
s[i] is either 'A', 'C', 'G', or 'T'.
Time limit: @time_limit ms
Memory limit: @memory_limit KB