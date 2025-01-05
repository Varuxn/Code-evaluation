class Solution {
public:
    const long long mod=998244353;
    const long long inv_24=291154603;
    int solve(long long n) {
        return (n + 1ll) * (n + 2ll)%mod * (n + 3ll)%mod * (n + 4ll)%mod * inv_24%mod;
    }
};