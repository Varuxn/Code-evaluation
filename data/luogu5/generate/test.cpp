#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int n,m;
    vector<int> a;
    cin>>n>>m;
    for(int i=1,x;i<=n;i++)
    {
        cin>>x;
        a.push_back(x);
    }

    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(n,m,a);
    get_usage(argv[0], argv[1]);

    // output
    cout << result << "\n";

    return 0;
}