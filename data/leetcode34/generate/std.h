class Solution {
public:
    int solve(vector<int>& nums) {
        int n=nums.size(),maxv=*max_element(nums.begin(),nums.end());
        if(maxv==0)
        return 0;
        int high=31-__builtin_clz(maxv);
        int ans=0,mask=0;
        unordered_set<int>seen;
        for(int i=high;i>=0;i--){
            seen.clear();
            mask|=1<<i;
            int tmp=ans|(1<<i);
            for(int x:nums){
                x&=mask;
                if(seen.find(tmp^x)!=seen.end()){
                    ans=tmp;
                    break;
                }
                seen.insert(x);
            }
        }
        return ans;
    }
};