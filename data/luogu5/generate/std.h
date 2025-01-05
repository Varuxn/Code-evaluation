class Solution
{
public:
    int solve(int n, int m, vector<int> &a)
    {
        const int mod = 1000007;
        a.insert(a.begin(), 0);
        vector<int> f(m + 1, 0), sum(m + 1, 0);
        f[0] = 1;

        for (int i = 0; i <= m; i++) 
            sum[i] = 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = m; j >= 1; j--)
            {
                int t = j - min(a[i], j) - 1;
                if (t < 0)
                    f[j] = (f[j] + sum[j - 1]) % mod;
                else
                    f[j] = (f[j] + sum[j - 1] - sum[t] + mod) % mod;
            }

            for (int j = 1; j <= m; j++)
                sum[j] = (sum[j - 1] + f[j]) % mod;
        }

        return f[m];
    }
};