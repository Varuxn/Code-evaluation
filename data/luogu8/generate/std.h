class Solution
{
public:
    int solve(int n, vector<int> &num)
    {
        num.insert(num.begin(), 0);
        int m = 0;
        sort(num.begin() + 1, num.begin() + n + 1);
        for (int i = 3; i <= n; i++)
        {
            for (int j = 1; j < i - 1; j++)
            {
                for (int k = j + 1; k < i; k++)
                {
                    if (num[j] + num[k] == num[i])
                    {
                        m++;
                        goto skip;
                    }
                }
            }
        skip:;
        }
        return m;
    }
};