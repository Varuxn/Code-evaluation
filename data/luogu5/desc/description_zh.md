小明的花店新开张，为了吸引顾客，他想在花店的门口摆上一排花，共 $m$ 盆。通过调查顾客的喜好，小明列出了顾客最喜欢的 $n$ 种花。为了在门口展出更多种花，规定第 $i$ 种花不能超过 $a_i$ 盆，摆花时同一种花放在一起，且不同种类的花需按标号的从小到大的顺序依次摆列。
试编程计算，一共有多少种不同的摆花方案。

solution内主函数
```cpp
class Solution
{
    public:
    int solve(int n, int m, vector<int> &a)
}
```

样例1：
Input：n=2,m=4,a=[3, 2]
Output: 2

限制：
0<n,m≤@data
0≤a[i]≤100
时间限制：@time_limit ms
内存限制：@memory_limit KB