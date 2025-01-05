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
    vector<vector<int> > g;
    vector<int> e[n+1];
    for(int i=1;i<=m;i++)
    {
        int x,y; cin>>x>>y;
        e[x].push_back(y);
    }
    for(int i=0;i<n;i++)
        g.push_back(e[i]);
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(g);
    get_usage(argv[0], argv[1]);

    // output
    for(auto it:result)
        cout<<it<<' ';
    return 0;
}