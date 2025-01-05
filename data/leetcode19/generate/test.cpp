#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int n,m;
    cin>>n>>m;
    vector<vector<int> > e;
    for(int i=1;i<=m;i++)
    {
        int x,y,z; cin>>x>>y>>z;
        vector<int> temp;
        temp.push_back(x);
        temp.push_back(y);
        temp.push_back(z);
        e.push_back(temp);
    }
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(n,e);
    get_usage(argv[0], argv[1]);

    // output
    cout<<result;
    return 0;
}