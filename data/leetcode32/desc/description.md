Given an array of integers arr.
We want to select three indices i, j and k where (0 <= i < j <= k < arr.length).
Let's define a and b as follows:
    a = arr[i] ^ arr[i + 1] ^ ... ^ arr[j - 1]
    b = arr[j] ^ arr[j + 1] ^ ... ^ arr[k]
Note that ^ denotes the bitwise-xor operation.
Return the number of triplets (i, j and k) Where a == b.

solution main function
```cpp
class Solution {
public:
    int solve(vector<int>& arr) {

    }
};
```

Example 1:
Input: arr = [2,3,1,6,7]
Output: 4

Example 2:
Input: arr = [2,3,1,6,7]
Output: 4

Restrictions:
1 <= arr.length <= @data
1 <= arr[i] <= 10^8
Time limit: @time_limit ms
Memory limit: @memory_limit KB