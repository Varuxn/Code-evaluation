class Solution {
public:
    bool solve(string s, int k) {
        int n = s.size();
        if(k > n) {
            return false;
        }
        int cur = 0;
        vector<bool> vis(1 << k, false);
        for(int i = 0; i < k; ++i) {
            cur = (cur << 1) + (s[i] == '1');    
        }
        vis[cur] = true;
        for(int i = k; i < n; ++i) {
            cur = (cur << 1) + (s[i] == '1');
            cur &= ~(1 << k);
            vis[cur] = true;
        }
        for(bool v : vis) {
            if(!v) {
                return false;
            }
        }
        return true;
    }
};