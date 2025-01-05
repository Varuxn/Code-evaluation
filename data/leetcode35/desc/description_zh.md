给定一个二进制数组 nums 和一个整数 k 。
k位翻转 就是从 nums 中选择一个长度为 k 的 子数组 ，同时把子数组中的每一个 0 都改成 1 ，把子数组中的每一个 1 都改成 0 。
返回数组中不存在 0 所需的最小 k位翻转 次数。如果不可能，则返回 -1 。
子数组 是数组的 连续 部分。

solution内主函数
```cpp
class Solution {
public:
    int solve(vector<int>& nums, int k) {

    }
};
```

样例1：
Input: nums = [3,10,5,25,2,8]
Output: 28

样例2：
Input: nums = [14,70,53,83,49,91,36,80,92,51,66,70]
Output: 127

限制：
1 <= nums.length <= @data
1 <= k <= nums.length
时间限制：@time_limit ms
内存限制：@memory_limit KB