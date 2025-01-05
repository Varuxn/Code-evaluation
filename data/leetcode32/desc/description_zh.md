给你一个整数数组 arr 。
现需要从数组中取三个下标 i、j 和 k ，其中 (0 <= i < j <= k < arr.length) 。
a 和 b 定义如下：
    a = arr[i] ^ arr[i + 1] ^ ... ^ arr[j - 1]
    b = arr[j] ^ arr[j + 1] ^ ... ^ arr[k]
注意：^ 表示 按位异或 操作。
请返回能够令 a == b 成立的三元组 (i, j , k) 的数目。

solution内主函数
```cpp
class Solution {
public:
    int solve(vector<int>& arr) {

    }
};
```

样例1：
Input: arr = [2,3,1,6,7]
Output: 4

样例2：
Input：arr = [1,1,1,1,1]
Output: 10

限制：
1 <= arr.length <= @data
1 <= arr[i] <= 10^8
时间限制：@time_limit ms
内存限制：@memory_limit KB