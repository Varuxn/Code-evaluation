class Solution {
public:
    long long solve(int n) {
        return static_cast<long long>(n) * n + static_cast<long long>(n - 1) * (n - 1);
    }
};