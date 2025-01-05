class Solution {
    vector<int> p,sz;
    vector<bool> r;
public:
    int find(int x) {
        if (p[x] != x) p[x] = find(p[x]);
        return p[x];
    }
    void unionSet(int a, int b) {
        a = find(a), b = find(b);
        if (a != b) {
            if (sz[a] > sz[b]) swap(a, b);
            p[a] = b, sz[b] += sz[a];
        }
    }
    int solve(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        for (int i = 0; i <= n; i ++ ) p.push_back(i),sz.push_back(1),r.push_back(false);
        for (auto &x : restricted) r[x] = true;
        for (auto &e : edges) if (!r[e[1]] && !r[e[0]]) unionSet(e[0], e[1]);
        return sz[find(0)];
    }
};