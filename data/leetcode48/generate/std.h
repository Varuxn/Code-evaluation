class Solution {
public:
    int solve(int n) {
        if (n == 1) return 0; // No steps needed for 1 'A'
        int steps = n; // In the worst case, we will need `n` steps (1 copy and `n-1` pastes)
        for (int d = 2; d <= sqrt(n); ++d) {
            if (n % d == 0) {
                // If `d` is a divisor of `n`, we calculate the steps for `d` and `n / d`
                steps = min(steps, solve(d) + (n / d));
                // Since we only need to consider divisors once, we also check the factor pair `n / d`
                steps = min(steps, solve(n / d) + d);
            }
        }
        return steps;
    }
};