class Solution {
public:
    int solve(int n, int k) {
        int ans = 0;
        for (int i = 1; i <= n; ++i) {
            ans = (ans + k) % i;
        }
        return ans + 1;
    }
};