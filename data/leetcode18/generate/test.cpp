#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int n;
    cin>>n;
    vector<vector<int> > stones;
    for(int i=1;i<=n;i++)
    {
        int x,y; cin>>x>>y;
        vector<int> temp;
        temp.push_back(x);
        temp.push_back(y);
        stones.push_back(temp);
    }
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(stones);
    get_usage(argv[0], argv[1]);

    // output
    cout<<result;
    return 0;
}