The chess knight has a unique movement, it may move two squares vertically and one square horizontally, or two squares horizontally and one square vertically (with both forming the shape of an L). The possible movements of chess knight are shown in this diagram:
We have a chess knight and a phone pad as shown below, the knight can only stand on a numeric cell (i.e. blue cell).
1 2 3
4 5 6
7 8 9
* 0 #

'*' and '#' are red,the others are blue
Given an integer n, return how many distinct phone numbers of length n we can dial.
You are allowed to place the knight on any numeric cell initially and then you should perform n - 1 jumps to dial a number of length n. All jumps should be valid knight jumps.
As the answer may be very large, return the answer modulo 10^9 + 7.

solution main function
```cpp
class Solution {
public:
    int solve(int n) {

    }
};
```

Example 1:
Input: n = 1
Output: 10

Example 2:
Input: n = 2
Output: 20

Restrictions:
1 <= n <= @data
Time limit: @time_limit ms
Memory limit: @memory_limit KB