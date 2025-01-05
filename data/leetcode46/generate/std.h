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
        if (n <= 3) {
            return n - 1;
        }
        int quotient = n / 3;
        int remainder = n % 3;
        if (remainder == 0)
            return power(3, quotient);
        else if (remainder == 1)
            return power(3, quotient - 1) * 4ll%mod;
        else
            return power(3, quotient) * 2ll%mod;
    }
};