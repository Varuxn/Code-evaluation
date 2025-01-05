给你一个二维矩阵 matrix 和一个整数 k ，矩阵大小为 m * n 由非负整数组成。
矩阵中坐标 (a, b) 的 目标值 可以通过对所有元素 matrix[i][j] 执行异或运算得到，其中 i 和 j 满足 0 <= i <= a < m 且 0 <= j <= b < n（下标从 0 开始计数）。
请你找出 matrix 的所有坐标中第 k 大的目标值（k 的值从 1 开始计数）。

solution内主函数
```cpp
class Solution {
public:
    int solve(vector<vector<int>>& matrix, int k) {

    }
};
```
样例1：
Input: matrix = [[5,2],[1,6]], k = 1
Output: 7

样例2：
Input：matrix = [[5,2],[1,6]], k = 2
Output: 5

限制：
m == matrix.length
n == matrix[i].length
1 <= m, n <= @data
0 <= matrix[i][j] <= 10^6
1 <= k <= m * n
时间限制：@time_limit ms
内存限制：@memory_limit KB