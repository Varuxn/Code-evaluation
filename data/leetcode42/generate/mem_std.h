class Solution {
public:
    const long long mod=998244353;
    int power(long long x,long long y)
    {
        long long temp=1;
        while(y)
        {
            if(y&1) temp=temp*x%mod;
            x=x*x%mod; y>>=1;
        }
        return temp;
    }
    int solve(int n) {
        long long C = 1;
        for (int i = 0; i < n; ++i) {
            C = C * 2ll%mod * (2ll * i + 1ll)%mod * power(i+2,mod-2)%mod;
        }
        return (int)C;
    }
};