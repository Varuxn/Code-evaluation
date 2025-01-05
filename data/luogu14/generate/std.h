class Solution
{
public:
    int solve(int n, vector<vector<int> >&r)
    {
		int f[n+1];
		for(int i=0;i<=n;i++) f[i]=0;
		for (int i=1;i<=n;i++)
			for (int j=i+1;j<=n;j++)
			{
				if (f[j]==0||f[j]>f[i]+r[i-1][j-i-1]) //如果j还没有到过或者到j的距离比原来短
					f[j]=f[i]+r[i-1][j-i-1]; //替换
			}
	return f[n];
    }
};