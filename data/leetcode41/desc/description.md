You are given an even integer n​​​​​​. You initially have a permutation perm of size n​​ where perm[i] == i​ (0-indexed)​​​​.
In one operation, you will create a new array arr, and for each i:
    If i % 2 == 0, then arr[i] = perm[i / 2].
    If i % 2 == 1, then arr[i] = perm[n / 2 + (i - 1) / 2].
You will then assign arr​​​​ to perm.
Return the minimum non-zero number of operations you need to perform on perm to return the permutation to its initial value.

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
Output: 1

Example 2:
Input: n = 4
Output: 2

Restrictions:
2 <= n <= @data
n​​​​​​ is even.
Time limit: @time_limit ms
Memory limit: @memory_limit KB