There is an undirected star graph consisting of n nodes labeled from 1 to n. A star graph is a graph where there is one center node and exactly n - 1 edges that connect the center node with every other node.

You are given a 2D integer array edges where each edges[i] = [ui, vi] indicates that there is an edge between the nodes ui and vi. Return the center of the given star graph.
solution main function
```cpp
class Solution
{
    public:
    int solve(vector<vector<int>>& edges)
}
```

Example 1:
Input: edges = [[1,2],[2,3],[4,2]]
Output: 2

Restrictions:

2 <= n <= @data
edges.length == n - 1
edges[i].length == 2
1 <= ui, vi <= n
ui ! = vi
Time limit: @time_limit ms
Memory limit: @memory_limit KB