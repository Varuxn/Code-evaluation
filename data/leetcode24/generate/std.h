class Solution {
public:
    bool solve(string s, vector<string>& wordDict) {
        vector<bool> dp(s.size() + 1, false);
        dp[0] = true;
        for (int i = 1; i < dp.size(); i++) {
            for (auto w : wordDict) {
                int len =  w.size();
                if (i - len >= 0) {
                    if (dp[i - len] && s.substr(i - len, len) == w) {
                        dp[i] = true;
                        break;
                    }
                }
            }
        }
        return dp.back();
    }
};