class Solution {
public:
    int solve(vector<int>& arr) {
        int ans = 0;
        int n = arr.size();
        for (int i = 0; i < n - 1; ++i) {
            int temp = arr[i];
            for (int j = i + 1; j < n; ++j) {
                temp ^= arr[j];
                if (temp == 0)
                    ans += j - i;
            }
        }
        return ans;
    }
};