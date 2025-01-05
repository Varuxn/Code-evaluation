给你一个长度为 n 的排列，求他后面的第m个排列

solution内主函数
```cpp
class Solution
{
    public:
    vector<int> solve(int n, int m, vector<int> &num)
}
```

传入参数:
2个整数n,m,一个数组num

返回参数:
一个数组表示答案。

样例1：
Input：n=5,m=3,num=[1, 2, 3, 4, 5]
Output: ans=[1, 2, 4, 5, 3]

限制：
0<n≤@data，m≤100
时间限制：@time_limit ms
内存限制：@memory_limit KB