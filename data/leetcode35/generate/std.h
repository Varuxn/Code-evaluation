class Solution {
public:
    int solve(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        int cnt = 0;
        for(int i=0;i<n;i++) {
            if(i>=k&&nums[i-k]>1) {
                cnt^=1;
                nums[i-k]-=2;
            }
            if(nums[i]==cnt) {
                if(i+k>n) return -1;
                cnt^=1;
                nums[i]+=2;
                ans++;
            }
        }
        return ans;
    }
};