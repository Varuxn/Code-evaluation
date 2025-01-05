给你一个按递增顺序排序的数组 arr 和一个整数 k 。数组 arr 由 1 和若干 质数 组成，且其中所有整数互不相同。
对于每对满足 0 <= i < j < arr.length 的 i 和 j ，可以得到分数 arr[i] / arr[j] 。
那么第 k 个最小的分数是多少呢?  以长度为 2 的整数数组返回你的答案, 这里 answer[0] == arr[i] 且 answer[1] == arr[j] 。

solution内主函数
```cpp
class Solution {
public:
    vector<int> solve(vector<int>& arr, int k) {

    }
};
```

样例1：
Input: arr = [1,2,3,5], k = 3
Output: [2,5]

样例2：
Input：arr = [1,7], k = 1
Output: [1,7]

限制：

2 <= arr.length <= @data
1 <= arr[i] <= 2*10^6
arr[0] == 1
arr[i] 是一个 质数 ，i > 0
arr 中的所有数字 互不相同 ，且按 严格递增 排序
1 <= k <= arr.length * (arr.length - 1) / 2

时间限制：@time_limit ms
内存限制：@memory_limit KB