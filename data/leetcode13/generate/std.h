class Solution {
public:
    vector<int> solve(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<bool> vis(n);
        vector<bool> safe(n);
        auto dfs = [&](auto dfs, int u) -> void {
            vis[u] = true;
            for(int v : graph[u]) {
                if(!vis[v]) { // 未访问过
                    dfs(dfs, v);
                    if(!safe[v]) { // 若不确定安全
                        safe[u] = false;
                        return ;
                    }
                } else if(!safe[v]) { // 已访问过且确定不安全
                    safe[u] = false;
                    return ;
                }
            }
            // 确定安全
            safe[u] = true;
        };

        for(int i = 0;i < n;i ++) {
            if(!vis[i]) dfs(dfs, i);
        }
        vector<int> ans;
        for(int i = 0;i < n;i ++) {
            if(safe[i]) ans.push_back(i);
        }
        return move(ans);
    }
};