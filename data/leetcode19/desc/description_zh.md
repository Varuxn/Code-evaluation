Alice 和 Bob 共有一个无向图，其中包含 n 个节点和 3  种类型的边：
    类型 1：只能由 Alice 遍历。
    类型 2：只能由 Bob 遍历。
    类型 3：Alice 和 Bob 都可以遍历。
给你一个数组 edges ，其中 edges[i] = [typei, ui, vi] 表示节点 ui 和 vi 之间存在类型为 typei 的双向边。请你在保证图仍能够被 Alice和 Bob 完全遍历的前提下，找出可以删除的最大边数。如果从任何节点开始，Alice 和 Bob 都可以到达所有其他节点，则认为图是可以完全遍历的。
返回可以删除的最大边数，如果 Alice 和 Bob 无法完全遍历图，则返回 -1 。

solution内主函数
```cpp
class Solution
{
    public:
    int solve(int n, vector<vector<int>>& edges)
}
```

样例1：
Input：n = 4, edges = [[3,1,2],[3,2,3],[1,1,3],[1,2,4],[1,1,2],[2,3,4]]
Output: 2

样例2：
Input：n = 4, edges = [[3,1,2],[3,2,3],[1,1,4],[2,1,4]]
Output: 0

限制：
1 <= n <= @data
1 <= edges.length <= min(10^5, 3 * n * (n-1) / 2)
edges[i].length == 3
1 <= edges[i][0] <= 3
1 <= edges[i][1] < edges[i][2] <= n
所有元组 (typei, ui, vi) 互不相同
时间限制：@time_limit ms
内存限制：@memory_limit KB