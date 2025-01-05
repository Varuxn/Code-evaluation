class Solution {
public:
    int find(vector<int>& G, int n)
    {
        while (G[n] >= 0){
            n = G[n];
        }
        return n;
    }

    int solve(int n, vector<vector<int>>& edges) {
        vector<int> G(n,-1);
        vector<int> edge(n,0);
        int cnt = 0;
        for (int i=0; i<edges.size(); i++){
            int r1 = find(G,edges[i][0]);
            int r2 = find(G,edges[i][1]);
            int t1 = fmin(r1,r2), t2 = fmax(r1,r2);
            r1 = t1;
            r2 = t2;
            if (r1 != r2){
                G[r1] += G[r2];
                G[r2] = r1;
                edge[r1] += edge[r2];
            }
            edge[r1]++;
        }
        for (int i=0; i<n; i++){
            if (G[i] < 0 && G[i] < 0 && edge[i] == (-G[i]-1)*(-G[i])/2){
                cnt++;
            }
        }
        return cnt;
    }
};