Yangtze River Yacht Club set up $n$yacht rental station on the Yangtze River $1,2,\cdots,n$. Visitors can hire their yacht at these yacht hire stations and return it at any of the yacht hire stations downstream. The rental between the yacht rental station $i$and the yacht rental station $j$is $r(i,j)$($1\le i\lt j\le n$). Try to design an algorithm to calculate the minimum rental required from the yacht rental station $1 to the yacht rental station $n$.

solution main function
```cpp
class Solution
{
    public:
    int solve(int n, vector<vector<int> >&r)
}
```

Pass in parameters:
1 integer n.
A two-dimensional vector array $n-1$row is a semi-matrix $r(i,j)$($1\le i<j\le n$)

Return parameters:
An integer representing the minimum rental required from the yacht rental station $1 to the yacht rental Station $n$.

Example 1:
Input: n=3,r=[[5, 15], [7]]
Output: 12

Restrictions:
0<n≤@data,r(i,j)≤1000
Time limit: @time_limit ms
Memory limit: @memory_limit KB