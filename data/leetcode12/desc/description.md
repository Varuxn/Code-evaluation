You are given an m * n binary grid grid where 1 represents land and 0 represents water. An island is a maximal 4-directionally (horizontal or vertical) connected group of 1's.
The grid is said to be connected if we have exactly one island, otherwise is said disconnected.
In one day, we are allowed to change any single land cell (1) into a water cell (0).
Return the minimum number of days to disconnect the grid.

solution main function
```cpp
class Solution
{
    public:
    int solve(vector<vector<int>>& grid)
}
```
Example 1:
Input：grid = [[0,1,1,0],[0,1,1,0],[0,0,0,0]]
Output: 2

Example 2:
Input：grid = [[1,1]]
Output: 2

Restrictions:
m == grid.length
n == grid[i].length
1 <= m, n <= @data
grid[i][j] is either 0 or 1
Time limit: @time_limit ms
Memory limit: @memory_limit KB