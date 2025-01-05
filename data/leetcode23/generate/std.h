class Solution {
public:
    int solve(string s, vector<string>& dictionary) {
        int n = s.size(), m = dictionary.size();
        vector<int> dp(n + 1);
        for (int i = 0; i <= n; i++) dp[i] = i;
        auto func = [&](int p, int q) {
            if (p + dictionary[q].size() > n) return false;
            for (int i = 0; i < dictionary[q].size(); i++) {
                if (s[p + i] != dictionary[q][i]) return false;
            }
            return true;
        };
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < dictionary.size(); j++) {
                if (func(i, j)) {
                    // cout << i << ' ' << j << '\n';
                    dp[i + dictionary[j].size()] = min(dp[i], dp[i + dictionary[j].size()]);
                }
            }
            dp[i + 1] = min(dp[i] + 1, dp[i + 1]); 
        }
        // for (int i = 0; i <= n; i++) cout << dp[i] << ' ';
        // cout << '\n';
        return dp[n];

    }
};