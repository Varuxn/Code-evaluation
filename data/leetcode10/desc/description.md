There are n servers numbered from 0 to n - 1 connected by undirected server-to-server connections forming a network where connections[i] = [ai, bi] represents a connection between servers ai and bi. Any server can reach other servers directly or indirectly through the network.
A critical connection is a connection that, if removed, will make some servers unable to reach some other server.
Return all critical connections in the network in any order.

solution main function
```cpp
class Solution
{
    public:
    vector<vector<int>> solve(int n, vector<vector<int>>& connections)
}
```


Example 1:
Input：n = 4, connections = [[0,1],[1,2],[2,0],[1,3]]
Output: [[1,3]]

Example 2:
Input：n = 2, connections = [[0,1]]
Output: [[0,1]]

Restrictions:
2 <= n <= @data
n - 1 <= connections.length <= 10^5
0 <= a[i], b[i] <= n - 1
a[i] != b[i]
Time limit: @time_limit ms
Memory limit: @memory_limit KB