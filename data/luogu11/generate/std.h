class Solution
{
public:
    long long solve(int k, int n)
    {
        long long ans,base=1;
        while(n){
            if(n&1)ans+=base;
            base*=k;
            n>>=1;
	    }
        return ans;
    }
};