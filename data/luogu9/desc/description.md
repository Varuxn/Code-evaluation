There is a water room in the school, which is equipped with a total of $m$taps for students to turn on the water, and the water supply of each tap is equal to $1 per second.
Now there are $n$students ready to receive water, their initial order of receiving water has been determined. These students are numbered from $1$to $n$in the order of receiving water, and the amount of water received by students with $i$is $w_i$. When receiving water, students from $1$to $m$each occupy a faucet and open the faucet at the same time. When one of the students $j$completes the water demand $w_j$, the next student $k$who waits in line to receive water immediately takes the place of the student $j$and starts to receive water. The replacement process is instantaneous and no water is wasted. That is, when $j$finishes receiving water at the end of $x$second, $k$starts receiving water immediately at $x+1$second. If the current number of people receiving water $n'$is less than $m$, only $n'$tap water supply, other $m - n'$tap closed.
Now give the amount of water received by $n$students, and ask how many seconds it takes for all students to receive water according to the above rules.

solution main function
```cpp
class Solution
{
    public:
    int solve(int n, int m, vector<int> &w)
}
```

Pass in parameters:
The two integers are $n and m$, respectively, indicating the number of people receiving water and the number of taps.
1 array, $n$integers $w_1,w_2,\ldots,w_n$, separated by a space between each two integers, $w_i$indicates the amount of water received by the student with $i$

Return parameters:
An integer representing the total time required to connect the water.

Example 1:
Input: n=5,m=3,w=[4, 4, 1, 2, 1]
Output: 4

Example 2:
Input: n=8,m=4,w=[23, 71, 87, 32, 70, 93, 80, 76]
Output: 163

Restrictions:
0<n≤@data, 1≤m≤100, m≤n, 1≤wi≤100
Time limit: @time_limit ms
Memory limit: @memory_limit KB