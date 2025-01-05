Bracteoles are ready to drive down the road.
There are $n$stops on the highway, numbered from $1$to $n$. The distance between site $i$and site $i + 1$is $v_i$km.
Every station on the highway can be refueled, the price of a liter of gas at the station numbered $i$is $a_i$, and each station only sells integer liters of gas.
The Bract wants to drive from the site $1 to the site $n$. At first the Bract is at the site $1 and the tank of the car is empty. It is known that the tank of the car is large enough to hold as much oil as it wants, and it can move forward $d$km per liter of oil. Ask the bract from the site $1$to the site $n$, at least how much money to spend on fuel?

solution main function
```cpp
class Solution
{
    public:
        long long solve(int n, int d, vector<int> &v, vector<int> &a)
}
```
Pass in parameters:
2 integers, $n,d$.
2 arrays, v containing $n-1 $positive integers $v_1, v_2\dots v_{n-1}$, respectively, representing the distance between sites.
a contains $n$positive integers $a_1, a_2 \dots a_n$, which represent the price of refueling at different stations.

Return parameters:
An integer indicating how much the bract must spend to refuel from the site $1$to the site $n$.

Example 1:
Input: n = 5, d = 4, n = [10, 10, 10, 10], a = [9, 8, 9, 6, 5]
Output: 79

Restrictions:
1≤n≤@data, 1≤d≤10^ 5,1 ≤a[i],v[i] ≤10^5
Time limit: @time_limit ms
Memory limit: @memory_limit KB