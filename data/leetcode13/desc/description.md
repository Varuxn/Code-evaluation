There is a directed graph of n nodes with each node labeled from 0 to n - 1. The graph is represented by a 0-indexed 2D integer array graph where graph[i] is an integer array of nodes adjacent to node i, meaning there is an edge from node i to each node in graph[i].
A node is a terminal node if there are no outgoing edges. A node is a safe node if every possible path starting from that node leads to a terminal node (or another safe node).
Return an array containing all the safe nodes of the graph. The answer should be sorted in ascending order.

solution main function
```cpp
class Solution
{
    public:
    vector<int> solve(vector<vector<int>>& graph)
}
```

Example 1:
Input：graph = [[1,2],[2,3],[5],[0],[5],[],[]]
Output: [2,4,5,6]

Example 2:
Input：graph = [[1,2,3,4],[1,2],[3,4],[0,4],[]]
Output: [4]

Restrictions:
n == graph.length
1 <= n <= @data
0 <= graph[i].length <= n
0 <= graph[i][j] <= n - 1
graph[i] is sorted in a strictly increasing order.
The graph may contain self-loops.
The number of edges in the graph will be in the range [1, 4 * n].
Time limit: @time_limit ms
Memory limit: @memory_limit KB