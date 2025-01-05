class Solution
{
public:
    int solve(int n, int m, int p1, int s1, int s2, vector<int> &c)
    {
        c.insert(c.begin(), 0);
        long long gap = 0;
        double where;
        long long ans;
        c[p1] += s1;
        for (int i = 1; i <= n; i++)
            gap += (m - i) * c[i];
        double dgap = gap;
        where = m + dgap / s2;
        if (where >= n)
            ans = n;
        else if (where <= 1)
            ans = 1;
        else
        {
            int iwhere = where;
            if (iwhere == where)
                ans = iwhere;
            else
            {
                long long ans1 = abs(gap + (m - iwhere) * s2);
                long long ans2 = abs(gap + (m - iwhere - 1) * s2);
                ans = ans1 <= ans2 ? iwhere : iwhere + 1;
            }
        }
        return ans;
    }
};