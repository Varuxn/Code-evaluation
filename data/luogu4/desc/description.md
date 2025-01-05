There is A crossing pawn at $A$on the board that needs to go to the target $B$point. Pawn walking rules: can go down, or right. At the same time, there is an opposing horse at the $C$point on the board, and the point where the horse is located and all the points reachable by the jump step are called the control point of the opposing horse. Therefore, it is called "horse blocking the river and pawn".
The board is represented by coordinates, $A$point $(0, 0)$, $B$point $(n, m)$, and the same horse position coordinates need to be given.
Now you are asked to calculate the number of paths that the pawn can take from point $A$to point $B$, assuming that the position of the horse is fixed, not that the pawn moves one step at a time.

solution main function
```cpp
class Solution
{
    public:
    long long solve(int n, int m, int x, int y)
}
```
Pass in parameters:
Four integers, $n,m,x,y$, represent the coordinates of point B and horse, respectively.

Return parameters:
An integer indicating the number of all paths.

Example 1:
Input: n=6,m=6,x=3,y=3
Output: 6

Restrictions:
0<n,m,x,y≤@data
Time limit: @time_limit ms
Memory limit: @memory_limit KB