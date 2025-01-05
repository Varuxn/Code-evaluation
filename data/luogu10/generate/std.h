class Solution
{
public:
    vector<int> solve(int n, int m, vector<int> &num)
    {
    	for(int i=1;i<=m;++i)	next_permutation(num.begin(),num.end());
        return num;
    }
};