长江游艇俱乐部在长江上设置了 $n$ 个游艇出租站 $1,2,\cdots,n$。游客可在这些游艇出租站租用游艇，并在下游的任何一个游艇出租站归还游艇。游艇出租站 $i$ 到游艇出租站 $j$ 之间的租金为 $r(i,j)$（$1\le i\lt j\le n$）。试设计一个算法，计算出从游艇出租站 $1$ 到游艇出租站 $n$ 所需的最少租金。

solution内主函数
```cpp
class Solution
{
    public:
    int solve(int n, vector<vector<int> >&r)
}
```

传入参数:
1个整数n。
一个二维vector数组 $n-1$ 行是一个半矩阵 $r(i,j)$（$1\le i<j\le n$）

返回参数:
一个整数，表示从游艇出租站 $1$ 到游艇出租站 $n$ 所需的最少租金。

样例1：
Input：n=3,r=[[5, 15], [ 7]]
Output: 12

限制：
0<n≤@data,r(i,j)≤1000
时间限制：@time_limit ms
内存限制：@memory_limit KB