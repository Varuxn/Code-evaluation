Given a weighted undirected connected graph with n vertices numbered from 0 to n - 1, and an array edges where edges[i] = [a_i, b_i, weight_i] represents a bidirectional and weighted edge between nodes a_i and b_i. A minimum spanning tree (MST) is a subset of the graph's edges that connects all vertices without cycles and with the minimum possible total edge weight.

Find all the critical and pseudo-critical edges in the given graph's minimum spanning tree (MST). An MST edge whose deletion from the graph would cause the MST weight to increase is called a critical edge. On the other hand, a pseudo-critical edge is that which can appear in some MSTs but not all.

Note that you can return the indices of the edges in any order.

solution main function
```cpp
class Solution
{
    public:
    vector<vector<int>> solve(int n, vector<vector<int>>& edges)
}
```

Example 1:
Input：n = 5, edges = [[0,1,1],[1,2,1],[2,3,2],[0,3,2],[0,4,3],[3,4,3],[1,4,6]]
Output: [[0,1],[2,3,4,5]]

Example 2:
Input：n = 4, edges = [[0,1,1],[1,2,1],[2,3,1],[0,3,1]]
Output: [[],[0,1,2,3]]

Restrictions:
2 <= n <= @data
1 <= edges.length <= min(4*n, n * (n - 1) / 2)
edges[i].length == 3
0 <= from_i < to_i < n
1 <= weight_i <= 1000
All pairs (a_i, b_i) are distinct
Time limit: @time_limit ms
Memory limit: @memory_limit KB