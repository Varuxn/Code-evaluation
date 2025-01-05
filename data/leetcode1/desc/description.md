Child A is playing a message game with his friends. The rules of the game are as follows:
There are n players, all of whom are numbered from 0 to n-1, and child A is numbered 0
Each player has a fixed number of other players to whom information can be transmitted (or not). The information transfer relationship is one-way (for example, A can send information to B, but B cannot send information to A).
Each round of information must need to be passed to another person, and the information can be repeated through the same person
Given the total number of players n, and the two-dimensional array relation formed by the [player number, corresponding to the passable player number] relation. Returns the number of schemes passed from minor A (number 0) to the small partner (number n-1) after k rounds; If it cannot be reached, return 0.

solution main function
```cpp
class Solution
{
    public:
    int solve(int n, vector<vector<int>>& relation, int k)
}
```

Example 1:
Input: n = 5, base = [[0, 2], [2, 1], [3, 4], [2, 3], [1, 4], [2, 0], [0, 4]], k = 3
Output: 3

Example 2:
Input: n = 3, relation = [[0,2],[2,1]], k = 2
Output: 0

Restrictions:

2 <= n <= @data
1 <= k <= @data

1 <= relation.length <= 10*@data, and relation[i].length == 2
0 <= relation[i][0],relation[i][1] < n and relation[i][0]! = relation[i][1]
Time limit: @time_limit ms
Memory limit: @memory_limit KB