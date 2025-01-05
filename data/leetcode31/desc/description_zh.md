假设有从 1 到 n 的 n 个整数。用这些整数构造一个数组 perm（下标从 1 开始），只要满足下述条件 之一 ，该数组就是一个 优美的排列 ：
    perm[i] 能够被 i 整除
    i 能够被 perm[i] 整除
给你一个整数 n ，返回可以构造的 优美排列 的 数量 。

solution内主函数
```cpp
class Solution {
public:
    int solve(int n) {

    }
};
```

样例1：
Input: n = 2
Output: 2

样例2：
Input：n = 1
Output: 1

限制：
1<=n<=@data>
时间限制：@time_limit ms
内存限制：@memory_limit KB