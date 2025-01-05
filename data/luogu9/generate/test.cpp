#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int n,m;cin>>n>>m;
    vector<int> w;
    for(int i=1,x;i<=n;i++)
    {
        cin>>x;
        w.push_back(x);
    }
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(n,m,w);
    get_usage(argv[0], argv[1]);

    // output
    cout << result << "\n";

    return 0;
}