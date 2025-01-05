You are given a 2D matrix of size m x n, consisting of non-negative integers. You are also given an integer k.
The value of coordinate (a, b) of the matrix is the XOR of all matrix[i][j] where 0 <= i <= a < m and 0 <= j <= b < n (0-indexed).
Find the kth largest value (1-indexed) of all the coordinates of matrix.

solution main function
```cpp
class Solution {
public:
    int solve(vector<vector<int>>& matrix, int k) {

    }
};
```

Example 1:
Input: matrix = [[5,2],[1,6]], k = 1
Output: 7

Example 2:
Input：matrix = [[5,2],[1,6]], k = 2
Output: 5

Restrictions:
m == matrix.length
n == matrix[i].length
1 <= m, n <= @data
0 <= matrix[i][j] <= 10^6
1 <= k <= m * n
Time limit: @time_limit ms
Memory limit: @memory_limit KB