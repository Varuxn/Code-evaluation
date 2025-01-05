There exists an infinitely large two-dimensional grid of uncolored unit cells. You are given a positive integer n, indicating that you must do the following routine for n minutes:
    At the first minute, color any arbitrary unit cell blue.
    Every minute thereafter, color blue every uncolored cell that touches a blue cell
Return the number of colored cells at the end of n minutes.

solution main function
```cpp
class Solution {
public:
    long long solve(int n) {

    }
};
```

Example 1:
Input: n = 1
Output: 1

Example 2:
Input: n = 2
Output: 5

Restrictions:
1 <= n <= @data
Time limit: @time_limit ms
Memory limit: @memory_limit KB