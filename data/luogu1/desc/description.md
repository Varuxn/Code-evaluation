Give an integer N and K transformation rules.
Rules:
- Change one digit to another.
- The right part of the rule cannot be zero.
Find out how many different integers can be produced by any number of transformations (0 or more).
Only the number of outputs is required.

solution main function
```cpp
class Solution
{
public:
string solve(string N, int K, vector<pair<int,int> > &rules)
}
```
Example 1:
Input: N = 234, K = 2, rules = [ [2, 5], [3, 6] ]
Output: 4

Restrictions:
0<N<10^@data,0<K<@data
Time limit: @time_limit ms
Memory limit: @memory_limit KB