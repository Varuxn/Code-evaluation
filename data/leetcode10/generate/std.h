class Solution {
public:
    vector<vector<int> > solve(int n, vector<vector<int> >& connections) {
        vector<vector<int>> dict(n);
        for(auto& edge:connections){
            dict[edge[0]].emplace_back(edge[1]);
            dict[edge[1]].emplace_back(edge[0]);
        }
        vector<int> id(n, -1);
        vector<vector<int>> res;
        dfs(0, 0, -1, id, dict, res);
        return res;
    }

    // Tarjan's算法，将整个环统合为一个节点
    int dfs(int node, int nodeId, int par, vector<int>& id, vector<vector<int>>& dict, vector<vector<int>>& res){
        // 先使用深度搜索来确认环的存在
        id[node] = nodeId; // 正常继承递增的编号
        for(int next:dict[node]){
            // f防止重复搜索
            if(next == par) continue;
            // 更新编号为环中最小的那个
            else if(id[next] == -1) id[node] = min(id[node], dfs(next, nodeId+1, node, id, dict, res));
            else id[node] = min(id[next], id[node]);
        }
        // node不能是0，因为不存在-1的家长，id[node] == nodeId意味着不在环中的连接（node为环中的最小编号节点而par自然不在环里）
        if(id[node] == nodeId && node != 0) res.push_back({par, node});
        return id[node];
    }
};