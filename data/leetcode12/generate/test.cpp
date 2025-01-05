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
    for(int i=1;i<=n;i++)
    {
        vector<int> temp;
        for(int j=1;j<=m;j++)
        {
            int x; cin>>x;
            temp.push_back(x);
        }
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