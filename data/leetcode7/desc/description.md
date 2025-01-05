You are given an integer array prices where prices[i] is the price of the ith item in a shop.
There is a special discount for items in the shop. If you buy the ith item, then you will receive a discount equivalent to prices[j] where j is the minimum index such that j > i and prices[j] <= prices[i]. Otherwise, you will not receive any discount at all.
Return an integer array answer where answer[i] is the final price you will pay for the ith item of the shop, considering the special discount.

solution main function
```cpp
class Solution
{
    public:
    vector<int> solve(vector<int>& prices)
}
```

Example 1:
Input：prices = [8,4,6,2,3]
Output: [4,2,4,2,3]

Example 2:
Input：prices = [1,2,3,4,5]
Output: [1,2,3,4,5]

Restrictions:
1 <= prices.length <= @data
1 <= prices[i] <= 10^3
Time limit: @time_limit ms
Memory limit: @memory_limit KB