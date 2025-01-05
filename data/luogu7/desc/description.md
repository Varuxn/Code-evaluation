Xuan Xuan and Kai Kai are playing a game called "Dragon Tiger Fight", the game board is a line segment, there are $n$barracks on the line segment (numbered $1 \sim n$from left to right), and the adjacent numbered barracks are separated by $1$cm, that is, the board is a line segment with a length of $n-1$cm. There are $c_i$engineers in the $i$barracks.
Xuan Xuan is on the left, representing "dragon"; Kai Kai is on the right, representing "Tiger". They use barracks $m$as a demarcation line, the sappers on the left belong to the Dragon force, the sappers on the right belong to the tiger force, and the sappers in barracks $m$are very tangled, they don't belong to either side.
The momentum of a barracks is: the number of engineers in the barracks $\times $the distance between the barracks and the $m$barracks; The power of a party participating in the game is defined as the sum of the momentum of all the barracks belonging to that party.
During the game, at some point, a total of $s_1$engineers suddenly appeared in the $p_1$barracks. As a friend of Xuan Xuan and Kai Kai, you know that if the gap between the two sides is too great, Xuan Xuan and Kai Kai are not willing to continue to play. In order for the game to continue, you need to select a barracks $p_2$and send all your $s_2$engineers to the barracks $p_2$, making the momentum gap between the two sides as small as possible.
Note: The sengineer you hold in the barracks has the same power as the other Sengineers in that barracks (if you fall in the $m$barracks, you don't belong to any power).

solution main function
```cpp
class Solution
{
    public:
    int solve(int n, int m, int p1, int s1, int s2, vector<int> &c)
}
```

Pass in parameters:
5 integers: $n,m,p_1,s_1,s_2$.
1 array, c contains $n$positive integers, the first positive integer represents the number of engineers in the barracks numbered $i$at the beginning of $c_i$.

Return parameters:
An integer $p_2$indicates the barracks number you selected. If multiple numbers are optimal, the smallest number is used.

Example 1:
Input: n=6,m=4,p1=6,s1=5,s2=2,c=[2, 3, 2, 3, 2, 3]
Output: 2

Example 2:
Input: n = 6, m = 5, p = 4, s1 = 1, s2 = 1, c = [1, 1, 1, 1, 1, 16]
Output: 1

Restrictions:
1<m<n, 1≤p1≤n, 1≤n≤@data, 1≤c[i],s1,s2 ≤10^9
Time limit: @time_limit ms
Memory limit: @memory_limit KB