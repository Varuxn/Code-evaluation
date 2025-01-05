class Solution {
public:
    int solve(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid1.size(), n = grid1[0].size();
        int count = 0;

        // Helper function for DFS
        auto dfs = [&](int x, int y, auto& dfs) -> bool {
            // If out of bounds or water in grid2, stop
            if (x < 0 || y < 0 || x >= m || y >= n ) {
                return true;
            }
            if( grid2[x][y] == 0) return true;
            // Mark the cell as visited in grid2
            grid2[x][y] = 0;

            // Check if the current cell is part of a sub-island
            bool isSubIsland = grid1[x][y] == 1;

            // Explore all 4 directions
            isSubIsland &= dfs(x + 1, y, dfs);
            isSubIsland &= dfs(x - 1, y, dfs);
            isSubIsland &= dfs(x, y + 1, dfs);
            isSubIsland &= dfs(x, y - 1, dfs);

            return isSubIsland;
        };

        // Iterate through all cells in grid2
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                // If it's an unvisited land cell in grid2, perform DFS
                if (grid2[i][j] == 1) {
                    if (dfs(i, j, dfs)) {
                        ++count;
                    }
                }
            }
        }

        return count;
    }
};