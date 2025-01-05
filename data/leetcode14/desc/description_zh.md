给你一个整数 n 。现有一个包含 n 个顶点的 无向 图，顶点按从 0 到 n - 1 编号。给你一个二维整数数组 edges 其中 edges[i] = [ai, bi] 表示顶点 ai 和 bi 之间存在一条 无向 边。
返回图中 完全连通分量 的数量。
如果在子图中任意两个顶点之间都存在路径，并且子图中没有任何一个顶点与子图外部的顶点共享边，则称其为 连通分量 。
如果连通分量中每对节点之间都存在一条边，则称其为 完全连通分量 。

solution内主函数
```cpp
class Solution
{
    public:
    int solve(int n, vector<vector<int>>& edges)
}
```

样例1：
Input：n = 6, edges = [[0,1],[0,2],[1,2],[3,4]]
Output: 3

样例2：
Input：n = 6, edges = [[0,1],[0,2],[1,2],[3,4],[3,5]]
Output: 1

限制：
1 <= n <= @data
0 <= edges.length <= 3*n
edges[i].length == 2
0 <= ai, bi <= n - 1
ai != bi
不存在重复的边
时间限制：@time_limit ms
内存限制：@memory_limit KB