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
    vector<vector<int> > g1,g2;
    for(int i=1;i<=n;i++)
    {
        vector<int> temp;
        for(int j=1;j<=m;j++)
        {
            int x; cin>>x; 
            temp.push_back(x);
        }
        g1.push_back(temp);
    }
    for(int i=1;i<=n;i++)
    {
        vector<int> temp;
        for(int j=1;j<=m;j++)
        {
            int x; cin>>x; 
            temp.push_back(x);
        }
        g2.push_back(temp);
    }
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(g1,g2);
    get_usage(argv[0], argv[1]);

    // output
    cout<<result;
    return 0;
}