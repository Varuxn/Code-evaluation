n 名士兵站成一排。每个士兵都有一个 独一无二 的评分 rating 。
从中选出 3 个士兵组成一个作战单位，规则如下：
    从队伍中选出下标分别为 i、j、k 的 3 名士兵，他们的评分分别为 rating[i]、rating[j]、rating[k]
    作战单位需满足： rating[i] < rating[j] < rating[k] 或者 rating[i] > rating[j] > rating[k] ，其中  0 <= i < j < k < n
请你返回按上述条件组建的作战单位的方案数。

solution内主函数
```cpp
class Solution {
public:
    int solve(vector<int>& rating) {

    }
};
```

样例1：
Input: rating = [2,5,3,4,1]
Output: 3

样例2：
Input：rating = [2,1,3]
Output: 0

限制：
n == rating.length
3 <= n <= @data
1 <= rating[i] <= 10^5
rating 中的元素都是唯一的
时间限制：@time_limit ms
内存限制：@memory_limit KB