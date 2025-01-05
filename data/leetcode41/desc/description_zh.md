给你一个偶数 n​​​​​​ ，已知存在一个长度为 n 的排列 perm ，其中 perm[i] == i​（下标 从 0 开始 计数）。
一步操作中，你将创建一个新数组 arr ，对于每个 i ：
    如果 i % 2 == 0 ，那么 arr[i] = perm[i / 2]
    如果 i % 2 == 1 ，那么 arr[i] = perm[n / 2 + (i - 1) / 2]
然后将 arr​​ 赋值​​给 perm 。
要想使 perm 回到排列初始值，至少需要执行多少步操作？返回最小的 非零 操作步数。

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
Output: 1

样例2：
Input: n = 4
Output: 2

限制：
2 <= n <= @data
n​​​​​​ 是一个偶数
时间限制：@time_limit ms
内存限制：@memory_limit KB