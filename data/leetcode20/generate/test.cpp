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
    vector<int> re;
    for(int i=1;i<n;i++)
    {
        int x,y; cin>>x>>y;
        vector<int> temp;
        temp.push_back(x);
        temp.push_back(y);
        e.push_back(temp);
    }
    for(int i=1;i<=m;i++)
    {
        int x; cin>>x;
        re.push_back(x);
    }
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(n,e,re);
    get_usage(argv[0], argv[1]);

    // output
    cout<<result;
    return 0;
}