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
    vector<vector<int> > g;
    for(int i=1;i<=n;i++)
    {
        vector<int> temp;
        int x,y; cin>>x>>y;
        temp.push_back(x);
        temp.push_back(y);
        g.push_back(temp);
    }
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(g);
    get_usage(argv[0], argv[1]);

    // output
    cout<<result;
    return 0;
}