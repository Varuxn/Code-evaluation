class Solution 
{   
    int dx[4] = {0,0,1,-1};
    int dy[4] = {1,-1,0,0};
    int m,n;
public:
    int solve(vector<vector<int>>& grid) 
    {   
        int ret = 0;
        m = grid.size(),n = grid[0].size();
        queue<pair<int,int>>q;
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(grid[i][j] == 1)
                {
                    if(i == 0 || j == 0 || i == m - 1 || j == n - 1)
                    {   
                        q.push({i, j});
                        grid[i][j] = 2;
                    }
                }


        while(q.size())
        {
            auto [a,b] = q.front();
            q.pop();
            for(int i = 0;i<4;i++)
            {
                int x = a+dx[i],y = b+dy[i];
                if(x>=0&&x<m&&y>=0&&y<n&&grid[x][y]==1) q.push({x,y}),grid[x][y] = 2;
            }
        }

       for(int i = 0;i<m;i++)
            for(int j = 0;j<n;j++)
                if(grid[i][j] == 1) ret++;

        return ret;
    }
};