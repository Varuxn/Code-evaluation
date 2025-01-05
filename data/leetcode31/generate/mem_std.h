class Solution {
public:
    int solve(int n) {
        vector<int> f(1<<n,0);
        f[0]=1;
        for(int mask=1;mask<(1<<n);mask++){
            int num=__builtin_popcount(mask);
            for(int i=0;i<n;i++){
                if(((mask)&(1<<i))&&((i+1)%num==0||num%(i+1)==0)){
                    f[mask]+=f[mask^(1<<i)];
                }
            }
        }
        return f.back();
    }
};