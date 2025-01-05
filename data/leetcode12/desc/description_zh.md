给你一个大小为 m * n ，由若干 0 和 1 组成的二维网格 grid ，其中 1 表示陆地， 0 表示水。岛屿 由水平方向或竖直方向上相邻的 1 （陆地）连接形成。
如果 恰好只有一座岛屿 ，则认为陆地是 连通的 ；否则，陆地就是 分离的 。
一天内，可以将 任何单个 陆地单元（1）更改为水单元（0）。
返回使陆地分离的最少天数。

solution内主函数
```cpp
class Solution
{
    public:
    int solve(vector<vector<int>>& grid)
}
```

样例1：
Input：grid = [[0,1,1,0],[0,1,1,0],[0,0,0,0]]
Output: 2

样例2：
Input：grid = [[1,1]]
Output: 2

限制：
m == grid.length
n == grid[i].length
1 <= m, n <= @data
grid[i][j] 为 0 或 1
时间限制：@time_limit ms
内存限制：@memory_limit KB