There are n soldiers standing in a line. Each soldier is assigned a unique rating value.
You have to form a team of 3 soldiers amongst them under the following rules:
    Choose 3 soldiers with index (i, j, k) with rating (rating[i], rating[j], rating[k]).
    A team is valid if: (rating[i] < rating[j] < rating[k]) or (rating[i] > rating[j] > rating[k]) where (0 <= i < j < k < n).
Return the number of teams you can form given the conditions. (soldiers can be part of multiple teams).

solution main function
```cpp
class Solution {
public:
    int solve(vector<int>& rating) {

    }
};
```

Example 1:
Input: rating = [2,5,3,4,1]
Output: 3

Example 2:
Input：rating = [2,1,3]
Output: 0

Restrictions:
n == rating.length
3 <= n <= @data
1 <= rating[i] <= 10^5
All the integers in rating are unique.
Time limit: @time_limit ms
Memory limit: @memory_limit KB