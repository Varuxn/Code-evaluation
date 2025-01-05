class Solution
{
public:
    long long solve(int n, int d, vector<int> &v, vector<int> &a)
    {
        long long ans = 0, s = 0;
        int mi = INT_MAX;
        v.insert(v.begin(), 0);
        a.insert(a.begin(), 0);
        for (int i = 1; i < n; i++)
        {
            s += v[i];
            mi = min(mi, a[i]);
            if (s > 0)
            {
                ans += (s + d - 1) / d * mi;
                s -= (s + d - 1) / d * d;
            }
        }

        return ans;
    }
};