class Solution {
    static constexpr int mod = 1e9 + 7;

public:
    vector<vector<int>> mul(const vector<vector<int>> &lth, const vector<vector<int>> &rth) {
        vector<vector<int>> res(lth.size(), vector<int>(rth[0].size(), 0));
        for (int k = 0; k < lth[0].size(); k++) {
            for (int i = 0; i < lth.size(); i++) {
                for (int j = 0; j < rth[0].size(); j++) {
                    res[i][j] = (res[i][j] + 1ll * lth[i][k] * rth[k][j] % mod) % mod;
                }
            }
        }
        return res;
    }

    int solve(int n) {
        vector<vector<int>> base = {
            {0, 0, 0, 0, 1, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 1, 0, 1, 0},
            {0, 0, 0, 0, 0, 0, 0, 1, 0, 1},
            {0, 0, 0, 0, 1, 0, 0, 0, 1, 0},
            {1, 0, 0, 1, 0, 0, 0, 0, 0, 1},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 1, 0, 0, 0, 0, 0, 1, 0, 0},
            {0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
            {0, 1, 0, 1, 0, 0, 0, 0, 0, 0},
            {0, 0, 1, 0, 1, 0, 0, 0, 0, 0}
        };
        vector<vector<int>> res = {
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
        };

        vector<vector<int>> base2 = vector<vector<int>>(10, vector<int>(10, 0));
        for (int i = 0; i < 10; i++) {
            base2[i][i] = 1;
        }
        n--;
        while (n > 0) {
            if (n & 1) {
                base2 = mul(base2, base);
            }
            base = mul(base, base);
            n >>= 1;
        }
        res = mul(res, base2);
        int ret = 0;
        for (auto x : res[0]) {
            ret = (ret + x) % mod;
        }

        return ret;
    }
};