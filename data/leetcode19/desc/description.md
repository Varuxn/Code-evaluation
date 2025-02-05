Alice and Bob have an undirected graph of n nodes and three types of edges:
    Type 1: Can be traversed by Alice only.
    Type 2: Can be traversed by Bob only.
    Type 3: Can be traversed by both Alice and Bob.
Given an array edges where edges[i] = [typei, ui, vi] represents a bidirectional edge of type typei between nodes ui and vi, find the maximum number of edges you can remove so that after removing the edges, the graph can still be fully traversed by both Alice and Bob. The graph is fully traversed by Alice and Bob if starting from any node, they can reach all other nodes.
Return the maximum number of edges you can remove, or return -1 if Alice and Bob cannot fully traverse the graph.

solution main function
```cpp
class Solution
{
    public:
    int solve(int n, vector<vector<int>>& edges)
}
```
Example 1:
Input：n = 4, edges = [[3,1,2],[3,2,3],[1,1,3],[1,2,4],[1,1,2],[2,3,4]]
Output: 2

Example 2:
Input：n = 4, edges = [[3,1,2],[3,2,3],[1,1,4],[2,1,4]]
Output: 0

Restrictions:
1 <= n <= @data
1 <= edges.length <= min(105, 3 * n * (n - 1) / 2)
edges[i].length == 3
1 <= typei <= 3
1 <= ui < vi <= n
All tuples (typei, ui, vi) are distinct.
Time limit: @time_limit ms
Memory limit: @memory_limit KB