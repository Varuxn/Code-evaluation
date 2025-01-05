You are given an m * n binary matrix grid, where 0 represents a sea cell and 1 represents a land cell.
A move consists of walking from one land cell to another adjacent (4-directionally) land cell or walking off the boundary of the grid.
Return the number of land cells in grid for which we cannot walk off the boundary of the grid in any number of moves.

solution main function
```cpp
class Solution
{
    public:
    int solve(vector<vector<int>>& grid)
}
```
Example 1:
Input：grid = [[0,0,0,0],[1,0,1,0],[0,1,1,0],[0,0,0,0]]
Output: 3

Example 2:
Input：grid = [[0,1,1,0],[0,0,1,0],[0,0,1,0],[0,0,0,0]]
Output: 0

Restrictions:
m == grid.length
n == grid[i].length
1 <= m, n <= @data
grid[i][j] is either 0 or 1
Time limit: @time_limit ms
Memory limit: @memory_limit KB