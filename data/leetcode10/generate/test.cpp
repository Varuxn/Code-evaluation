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
        int x,y; cin>>x>>y;
        vector<int> temp;
        temp.push_back(x);
        temp.push_back(y);
        edge.push_back(temp);
    }
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(n,edge);
    get_usage(argv[0], argv[1]);

    // output
    sort(result.begin(),result.end());
    for(auto it:result)
    {
        int x=it[0];
        int y=it[1];
        if(x>y) swap(x,y);
        cout<<x<<' '<<y<<' ';
    }
    return 0;
}