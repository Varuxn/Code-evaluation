class Solution {
public:
    int solve(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> arr_freq;
        arr_freq.push_back(1);
        int cir_freq = 0;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]!=arr[i+1]){
                arr_freq.push_back(1);
                cir_freq++;
            }
            else{
                arr_freq[cir_freq] += 1;
            }
        }
        sort(arr_freq.begin(),arr_freq.end());
        int res = 0;
        int res_size = arr.size();
        for(int i=arr_freq.size()-1;i>=0;i--){
            if(res_size>arr.size()/2){
                res++;
                res_size -= arr_freq[i];
            }
            else{
                break;
            }
        }
        return res;
    }
};