class Solution {
    bool check[16]={};
    int ans=0;
public:
    int solve(int n)
    {
        dfs(1,n);
        return ans;
    }
    void dfs(int pos,int n)
    {
        if(pos==n+1)
        {
            ans++;
            return;
        }
        for(int i=1;i<=n;i++)
        {
            if(!check[i]&&(pos%i==0||i%pos==0))
            {
                check[i]=true;
                dfs(pos+1,n);
                check[i]=false;
            }
        }

    }
};