You are given a binary array nums and an integer k.
A k-bit flip is choosing a subarray of length k from nums and simultaneously changing every 0 in the subarray to 1, and every 1 in the subarray to 0.
Return the minimum number of k-bit flips required so that there is no 0 in the array. If it is not possible, return -1.
A subarray is a contiguous part of an array.

solution main function
```cpp
class Solution {
public:
    int solve(vector<int>& nums, int k) {

    }
};
```

Example 1:
Input: nums = [0,1,0], k = 1
Output: 2

Example 2:
Input: nums = [1,1,0], k = 2
Output: -1

Restrictions:
1 <= nums.length <= @data
1 <= k <= nums.length
Time limit: @time_limit ms
Memory limit: @memory_limit KB