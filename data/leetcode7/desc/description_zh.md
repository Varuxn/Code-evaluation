给你一个数组 prices ，其中 prices[i] 是商店里第 i 件商品的价格。
商店里正在进行促销活动，如果你要买第 i 件商品，那么你可以得到与 prices[j] 相等的折扣，其中 j 是满足 j > i 且 prices[j] <= prices[i] 的 最小下标 ，如果没有满足条件的 j ，你将没有任何折扣。
请你返回一个数组，数组中第 i 个元素是折扣后你购买商品 i 最终需要支付的价格。

solution内主函数
```cpp
class Solution
{
    public:
    vector<int> solve(vector<int>& prices)
}
```

样例1：
Input：prices = [8,4,6,2,3]
Output: [4,2,4,2,3]

样例2：
Input：prices = [1,2,3,4,5]
Output: [1,2,3,4,5]

限制：
1 <= prices.length <= @data
1 <= prices[i] <= 10^3
时间限制：@time_limit ms
内存限制：@memory_limit KB