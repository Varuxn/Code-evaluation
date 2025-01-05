有一个无向的 星型 图，由 n 个编号从 1 到 n 的节点组成。星型图有一个 中心 节点，并且恰有 n - 1 条边将中心节点与其他每个节点连接起来。
给你一个二维整数数组 edges ，其中 edges[i] = [ui, vi] 表示在节点 ui 和 vi 之间存在一条边。请你找出并返回 edges 所表示星型图的中心节点。

solution内主函数
```cpp
class Solution
{
    public:
    int solve(vector<vector<int>>& edges)
}
```

样例1：
Input：edges = [[1,2],[2,3],[4,2]]
Output: 2

限制：

2 <= n <= @data
edges.length == n - 1
edges[i].length == 2
1 <= ui, vi <= n
ui != vi
时间限制：@time_limit ms
内存限制：@memory_limit KB