Suppose you have n integers labeled 1 through n. A permutation of those n integers perm (1-indexed) is considered a beautiful arrangement if for every i (1 <= i <= n), either of the following is true:
    perm[i] is divisible by i.
    i is divisible by perm[i].
Given an integer n, return the number of the beautiful arrangements that you can construct.

solution main function
```cpp
class Solution {
public:
    int solve(int n) {

    }
};
```

Example 1:
Input: n = 2
Output: 2

Example 2:
Input: n = 1
Output: 1

Restrictions:
1 <= n <= @data
Time limit: @time_limit ms
Memory limit: @memory_limit KB