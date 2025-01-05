给你一个大小为 m * n 的二进制矩阵 grid ，其中 0 表示一个海洋单元格、1 表示一个陆地单元格。
一次 移动 是指从一个陆地单元格走到另一个相邻（上、下、左、右）的陆地单元格或跨过 grid 的边界。
返回网格中 无法 在任意次数的移动中离开网格边界的陆地单元格的数量。

solution内主函数
```cpp
class Solution
{
    public:
    int solve(vector<vector<int>>& grid)
}
```

样例1：
Input：grid = [[0,0,0,0],[1,0,1,0],[0,1,1,0],[0,0,0,0]]
Output: 3

样例2：
Input：grid = [[0,1,1,0],[0,0,1,0],[0,0,1,0],[0,0,0,0]]
Output: 0

限制：
m == grid.length
n == grid[i].length
1 <= m, n <= @data
grid[i][j] 的值为 0 或 1
时间限制：@time_limit ms
内存限制：@memory_limit KB