有一个无穷大的二维网格图，一开始所有格子都未染色。给你一个正整数 n ，表示你需要执行以下步骤 n 分钟：
    第一分钟，将 任一 格子染成蓝色。
    之后的每一分钟，将与蓝色格子相邻的 所有 未染色格子染成蓝色。
请你返回 n 分钟之后 被染色的格子 数目。

solution内主函数
```cpp
class Solution {
public:
    long long solve(int n) {

    }
};
```

样例1：
Input: n = 1
Output: 1

样例2：
Input: n = 2
Output: 5

限制：
1 <= n <= @data
时间限制：@time_limit ms
内存限制：@memory_limit KB