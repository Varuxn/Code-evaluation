#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int n,m,k; cin>>n>>m;
    vector< vector<int> > relation;
    for(int i=1,x,y;i<=m;i++)
    {
        cin>>x>>y;
        vector<int> temp;
        temp.push_back(x);
        temp.push_back(y);
        relation.push_back(temp);
    }
    cin>>k;
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(n,relation,k);
    get_usage(argv[0], argv[1]);

    // output
    cout << result << "\n";

    return 0;
}