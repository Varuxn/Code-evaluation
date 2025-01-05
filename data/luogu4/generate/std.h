class Solution {
public:
    long long solve(int n, int m, int x, int y) {
        int bx = n + 2, by = m + 2, mx = x + 2, my = y + 2;
        vector<long long> f(by + 1, 0);
        f[2] = 1;

        auto check = [&](int i, int j) {
            if (i == mx && j == my) return true;
            return (abs(mx - i) + abs(my - j) == 3) && (max(abs(mx - i), abs(my - j)) == 2);
        };

        for (int i = 2; i <= bx; i++) {
            for (int j = 2; j <= by; j++) {
                if (check(i, j)) {
                    f[j] = 0;
                } else {
                    f[j] += f[j - 1];
                }
            }
        }

        return f[by];
    }
};