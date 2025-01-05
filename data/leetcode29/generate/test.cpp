#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int n,m,k;cin>>n>>m>>k;
    vector<vector<int> > num;
    for(int i=1;i<=n;i++)
    {
        vector<int> temp;
        for(int j=1;j<=m;j++)
        {
            int x; cin>>x;
            temp.push_back(x);
        }
        num.push_back(temp);
    }
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(num,k);
    get_usage(argv[0], argv[1]);

    // output
    cout<<result;
    return 0;
}