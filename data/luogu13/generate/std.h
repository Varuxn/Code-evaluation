class Solution
{
public:
    pair< int,vector<string> > solve(int n)
    {
        vector<string> ans;
        for (int i=1;i<=n;i++){
            string s;
            for (int j=1;j<=i;j++) s.push_back(48|~i&1);
            for (int j=i+1;j<=n;j++) s.push_back(48|i&1);
            ans.push_back(s);
        }
        return {n,ans};
    }
};