n 块石头放置在二维平面中的一些整数坐标点上。每个坐标点上最多只能有一块石头。
如果一块石头的 同行或者同列 上有其他石头存在，那么就可以移除这块石头。
给你一个长度为 n 的数组 stones ，其中 stones[i] = [xi, yi] 表示第 i 块石头的位置，返回 可以移除的石子 的最大数量。

solution内主函数
```cpp
class Solution
{
    public:
    int solve(vector<vector<int>>& stones)
}
```

样例1：
Input：stones = [[0,0],[0,1],[1,0],[1,2],[2,1],[2,2]]
Output: 5

样例2：
Input：stones = [[0,0],[0,2],[1,1],[2,0],[2,2]]
Output: 3

限制：
1 <= stones.length <= @data
0 <= xi, yi <= 10^4
不会有两块石头放在同一个坐标点上
时间限制：@time_limit ms
内存限制：@memory_limit KB