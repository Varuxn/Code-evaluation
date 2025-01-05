You are given an integer array arr. You can choose a set of integers and remove all the occurrences of these integers in the array.
Return the minimum size of the set so that at least half of the integers of the array are removed.

solution main function
```cpp
class Solution
{
    public:
    int solve(vector<int>& arr)
}
```

Example 1:
Input：arr = [3,3,3,3,5,5,5,2,2,7]
Output: 2

Example 2:
Input：arr = [7,7,7,7,7,7]
Output: 1

Restrictions:
1 <= arr.length <= @data
arr.length is even.
1 <= arr[i] <= 10^5
Time limit: @time_limit ms
Memory limit: @memory_limit KB