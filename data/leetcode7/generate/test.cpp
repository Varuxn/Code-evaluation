#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int n;
    cin>>n;
    vector<int> price;
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        price.push_back(x);
    }
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(price);
    get_usage(argv[0], argv[1]);

    // output
    for(auto it:result) cout<<it<<' ';

    return 0;
}