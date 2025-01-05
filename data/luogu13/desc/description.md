There is a row of $N$coins on the table, and each coin is heads up. Now to flip all the coins tails up, the rule is that you can flip any $N- $1 coin at a time (heads up are flipped tails up and vice versa). Find the shortest sequence of operations (turning each flip of $N-1 coin into one operation).

solution main function
```cpp
class Solution
{
    public:
    pair< int,vector<string> > solve(int n)
}
```

Pass in parameters:
An even natural number $n$.

Return parameters:
An integer represents the minimum number of operations required.
A vector<string> array that stores the state of the coins on the table after each operation (a row containing $N$integers $0$or $1$, representing the state of each coin, $0$representing heads up and $1$representing tails up). The output of redundant Spaces is not allowed.
In cases where there are multiple operation options, only the lexicographic order of the operation needs to output a minimum of one.
The lexicographic order of operations means that for each position in an operation, $1$means flip and $0$means no flip.
But what you need to output is the state after each operation, $0$means heads up, $1$means tails up.

Example 1:
Input: n=4
Output: (4,["0111", "1100", "0001", "1111"])

Restrictions:
0<n≤@data
Time limit: @time_limit ms
Memory limit: @memory_limit KB