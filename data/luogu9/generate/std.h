class Solution
{
public:
    int solve(int n, int m, vector<int> &w)
    {
        int t = m + 1;
        int ans = 0;
        while (t <= n + m)
        {
            for (int i = 1; i <= m; i++)
            {
                w[i]--;
                if (w[i] == 0)
                {
                    w[i] = w[t];
                    t++;
                }
            }
            ans++;
        }
        return ans;
    }
};