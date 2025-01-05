现有一棵由 n 个节点组成的无向树，节点编号从 0 到 n - 1 ，共有 n - 1 条边。
给你一个二维整数数组 edges ，长度为 n - 1 ，其中 edges[i] = [ai, bi] 表示树中节点 ai 和 bi 之间存在一条边。另给你一个整数数组 restricted 表示 受限 节点。
在不访问受限节点的前提下，返回你可以从节点 0 到达的 最多 节点数目。
注意，节点 0 不 会标记为受限节点。

solution内主函数
```cpp
class Solution
{
    public:
    int solve(int n, vector<vector<int>>& edges, vector<int>& restricted)
}
```

样例1：
Input：n = 7, edges = [[0,1],[1,2],[3,1],[4,0],[0,5],[5,6]], restricted = [4,5]
Output: 4

样例2：
Input：n = 7, edges = [[0,1],[0,2],[0,5],[0,4],[3,2],[6,5]], restricted = [4,2,1]
Output: 3

限制：
2 <= n <= @data
edges.length == n - 1
edges[i].length == 2
0 <= ai, bi < n
ai != bi
edges 表示一棵有效的树
1 <= restricted.length < n
1 <= restricted[i] < n
restricted 中的所有值 互不相同
时间限制：@time_limit ms
内存限制：@memory_limit KB