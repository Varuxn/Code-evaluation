给你一个整数数组 arr。你可以从中选出一个整数集合，并删除这些整数在数组中的每次出现。
返回 至少 能删除数组中的一半整数的整数集合的最小大小。

solution内主函数
```cpp
class Solution
{
    public:
    int solve(vector<int>& arr)
}
```

样例1：
Input：arr = [3,3,3,3,5,5,5,2,2,7]
Output: 2

样例2：
Input：arr = [7,7,7,7,7,7]
Output: 1

限制：
1 <= arr.length <= @data
arr.length 为偶数
1 <= arr[i] <= 10^5
时间限制：@time_limit ms
内存限制：@memory_limit KB