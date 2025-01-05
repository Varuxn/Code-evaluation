给你一个points 数组，表示 2D 平面上的一些点，其中 points[i] = [xi, yi] 。
连接点 [xi, yi] 和点 [xj, yj] 的费用为它们之间的 曼哈顿距离 ：|xi - xj| + |yi - yj| ，其中 |val| 表示 val 的绝对值。
请你返回将所有点连接的最小总费用。只有任意两点之间 有且仅有 一条简单路径时，才认为所有点都已连接。

solution内主函数
```cpp
class Solution
{
    public:
    int solve(vector<vector<int>>& points)
}
```

样例1：
Input：points = [[0,0],[2,2],[3,10],[5,2],[7,0]]
Output: 20

样例2：
Input：points = [[3,12],[-2,5],[-4,1]]
Output: 18

限制：
1 <= points.length <= @data
-10^6 <= xi, yi <= 10^6
所有点 (xi, yi) 两两不同。
时间限制：@time_limit ms
内存限制：@memory_limit KB