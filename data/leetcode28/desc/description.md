You are given a sorted integer array arr containing 1 and prime numbers, where all the integers of arr are unique. You are also given an integer k.
For every i and j where 0 <= i < j < arr.length, we consider the fraction arr[i] / arr[j].
Return the kth smallest fraction considered. Return your answer as an array of integers of size 2, where answer[0] == arr[i] and answer[1] == arr[j].

solution main function
```cpp
class Solution {
public:
    vector<int> solve(vector<int>& arr, int k) {

    }
};
```

Example 1:
Input: arr = [1,2,3,5], k = 3
Output: [2,5]

Example 2:
Input: arr = [1,7], k = 1
Output: [1,7]

Restrictions:
2 <= arr.length <= @data
1 <= arr[i] <= 2*10^6
arr[0] == 1
arr[i] is a prime number for i > 0.
All the numbers of arr are unique and sorted in strictly increasing order.
1 <= k <= arr.length * (arr.length - 1) / 2
Time limit: @time_limit ms
Memory limit: @memory_limit KB