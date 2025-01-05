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
    int solve(int m,int n) {
        long long ans = 1,tx=1,ty=1;
        for (int x = n, y = 1; y < m; ++x, ++y) {
            tx=tx*x%mod; ty=ty*y%mod;
        }
        return tx*power(ty,mod-2)%mod;
    }
};