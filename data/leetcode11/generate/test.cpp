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
    vector<vector<int> > edge;
    for(int i=1;i<=m;i++)
    {
        int x,y,z; cin>>x>>y>>z;
        vector<int> temp;
        temp.push_back(x);
        temp.push_back(y);
        temp.push_back(z);
        edge.push_back(temp);
    }
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(n,edge);
    get_usage(argv[0], argv[1]);

    // output
    for(auto it:result)
    {
        sort(it.begin(),it.end());
        for(auto x:it)
            cout<<x<<' ';
        cout<<endl;
    }
    return 0;
}