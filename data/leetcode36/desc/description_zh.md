给你一个整数数组 nums ，找出并返回所有该数组中不同的递增子序列，递增子序列中 至少有两个元素 。你可以按 任意顺序 返回答案。
数组中可能含有重复元素，如出现两个整数相等，也可以视作递增序列的一种特殊情况。

solution内主函数
```cpp
class Solution {
public:
    vector<vector<int>> solve(vector<int>& nums) {

    }
};
```

样例1：
Input: nums = [4,6,7,7]
Output: [[4,6],[4,6,7],[4,6,7,7],[4,7],[4,7,7],[6,7],[6,7,7],[7,7]]

样例2：
Input: nums = [4,4,3,2,1]
Output: [[4,4]]

限制：
1 <= nums.length <= @data
-100 <= nums[i] <= 100
时间限制：@time_limit ms
内存限制：@memory_limit KB