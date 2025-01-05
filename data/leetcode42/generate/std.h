class Solution {
public:
    const long long mod=998244353;
    int solve(int n) {
        long long C = 1;
        vector<long long> inv(n+3);
        inv[0]=inv[1]=1;
        for(int i=2;i<=n+1;i++)
            inv[i]=((mod-mod/i)*inv[mod%i])%mod;
        for (int i = 0; i < n; ++i) {
            C = C * 2ll%mod * (2ll * i + 1ll)%mod * inv[i+2]%mod;
        }
        return (int)C;
    }
};