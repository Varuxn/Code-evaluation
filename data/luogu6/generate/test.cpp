#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int n,d; cin>>n>>d;
    vector<int> dist,val;
    for(int i=1,x;i<n;i++)
    {
        cin>>x;
        dist.push_back(x);
    }
    for(int i=1,x;i<=n;i++)
    {
        cin>>x;
        val.push_back(x);
    }
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(n,d,dist,val);
    get_usage(argv[0], argv[1]);

    // output
    cout << result << "\n";

    return 0;
}