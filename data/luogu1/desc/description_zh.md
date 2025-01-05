给出一个整数 N 和 K 个变换规则。
规则：
- 一位数可变换成另一个一位数。
- 规则的右部不能为零。
求出经过任意次的变换（0 次或多次），能产生出多少个不同整数。
仅要求输出个数。

solution内主函数
```cpp
class Solution
{
public:
string solve(string N, int K, vector<pair<int,int> > &rules)
}
```

样例1：
Input：N = 234, K = 2, rules = [ [2, 5], [3, 6] ]
Output: 4

限制：
0<N<10^@data,0<K<@data
时间限制：@time_limit ms
内存限制：@memory_limit KB