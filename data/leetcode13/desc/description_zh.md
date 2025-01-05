有一个有 n 个节点的有向图，节点按 0 到 n - 1 编号。图由一个 索引从 0 开始 的 2D 整数数组 graph表示， graph[i]是与节点 i 相邻的节点的整数数组，这意味着从节点 i 到 graph[i]中的每个节点都有一条边。
如果一个节点没有连出的有向边，则该节点是 终端节点 。如果从该节点开始的所有可能路径都通向 终端节点 ，则该节点为 安全节点 。
返回一个由图中所有 安全节点 组成的数组作为答案。答案数组中的元素应当按 升序 排列。

solution内主函数
```cpp
class Solution
{
    public:
    vector<int> solve(vector<vector<int>>& graph)
}
```

样例1：
Input：graph = [[1,2],[2,3],[5],[0],[5],[],[]]
Output: [2,4,5,6]

样例2：
Input：graph = [[1,2,3,4],[1,2],[3,4],[0,4],[]]
Output: [4]

限制：
n == graph.length
1 <= n <= @data
0 <= graph[i].length <= n
0 <= graph[i][j] <= n - 1
graph[i] 按严格递增顺序排列。
图中可能包含自环。
图中边的数目在范围 [1, 4 * n] 内
时间限制：@time_limit ms
内存限制：@memory_limit KB