某学校的珠心算老师采用一种快速考察珠心算加法能力的测验方法。他随机生成一个正整数集合，集合中的数各不相同，然后要求学生回答：其中有多少个数，恰好等于集合中另外两个（不同的）数之和？
最近老师出了一些测验题，请你帮忙求出答案。

solution内主函数
```cpp
class Solution
{
    public:
    int solve(int n, vector<int> &num)
}
```

传入参数:
1个整数，n。
1个数组，num包含n个正整数。

返回参数:
一个整数 ，表示测验题答案

样例1：
Input：n=4,num=[1, 2, 3, 4]
Output: 2

限制：
3≤n≤@data，1≤num[i]​≤10000
时间限制：@time_limit ms
内存限制：@memory_limit KB