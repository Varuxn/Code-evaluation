Given an integer array nums, return all the different possible non-decreasing subsequences of the given array with at least two elements. You may return the answer in any order.

solution main function
```cpp
class Solution {
public:
    vector<vector<int>> solve(vector<int>& nums) {

    }
};
```

Example 1:
Input: nums = [4,6,7,7]
Output: [[4,6],[4,6,7],[4,6,7,7],[4,7],[4,7,7],[6,7],[6,7,7],[7,7]]

Example 2:
Input: nums = [4,4,3,2,1]
Output: [[4,4]]

Restrictions:
1 <= nums.length <= @data
-100 <= nums[i] <= 100
Time limit: @time_limit ms
Memory limit: @memory_limit KB