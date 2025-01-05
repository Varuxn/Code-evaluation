给你一个 n 个点的带权无向连通图，节点编号为 0 到 n-1 ，同时还有一个数组 edges ，其中 edges[i] = [from_i, to_i, weight_i] 表示在 from_i 和 to_i 节点之间有一条带权无向边。最小生成树 (MST) 是给定图中边的一个子集，它连接了所有节点且没有环，而且这些边的权值和最小。
请你找到给定图中最小生成树的所有关键边和伪关键边。如果从图中删去某条边，会导致最小生成树的权值和增加，那么我们就说它是一条关键边。伪关键边则是可能会出现在某些最小生成树中但不会出现在所有最小生成树中的边。
请注意，你可以分别以任意顺序返回关键边的下标和伪关键边的下标。

solution内主函数
```cpp
class Solution
{
    public:
    vector<vector<int>> solve(int n, vector<vector<int>>& edges)
}
```

样例1：
Input：n = 5, edges = [[0,1,1],[1,2,1],[2,3,2],[0,3,2],[0,4,3],[3,4,3],[1,4,6]]
Output: [[0,1],[2,3,4,5]]

样例2：
Input：n = 4, edges = [[0,1,1],[1,2,1],[2,3,1],[0,3,1]]
Output: [[],[0,1,2,3]]

限制：
2 <= n <= @data
1 <= edges.length <= min(4*n, n * (n - 1) / 2)
edges[i].length == 3
0 <= from_i < to_i < n
1 <= weight_i <= 1000
所有 (from_i, to_i) 数对都是互不相同的。
时间限制：@time_limit ms
内存限制：@memory_limit KB