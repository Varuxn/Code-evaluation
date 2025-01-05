There is a safe protected by a password. The password is a sequence of n digits where each digit can be in the range [0, k - 1].
The safe has a peculiar way of checking the password. When you enter in a sequence, it checks the most recent n digits that were entered each time you type a digit.
    For example, the correct password is "345" and you enter in "012345":
        After typing 0, the most recent 3 digits is "0", which is incorrect.
        After typing 1, the most recent 3 digits is "01", which is incorrect.
        After typing 2, the most recent 3 digits is "012", which is incorrect.
        After typing 3, the most recent 3 digits is "123", which is incorrect.
        After typing 4, the most recent 3 digits is "234", which is incorrect.
        After typing 5, the most recent 3 digits is "345", which is correct and the safe unlocks.
Return any string of minimum length that will unlock the safe at some point of entering it.

solution main function
```cpp
class Solution
{
    public:
    string solve(int n, int k)
}
```
Example 1:
Input：n = 1, k = 2
Output: "10"

Example 2:
Input：n = 2, k = 2
Output: "01100"

Restrictions:
1 <= n <= 4
1 <= k <= @data
1 <= k^n <= 4096
Time limit: @time_limit ms
Memory limit: @memory_limit KB