#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int n,k;cin>>n>>k;
    vector<int> num;
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        num.push_back(x);
    }
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(num,k);
    get_usage(argv[0], argv[1]);

    // output
    for(auto it:result) cout<<it;
    return 0;
}