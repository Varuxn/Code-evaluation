#include <bits/stdc++.h>
#include <iterator>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int n,m; cin>>n>>m;
    vector<int> num1,num2;
    for(int i=1;i<=n;i++)
    {
        int x; cin>>x;
        num1.push_back(x);
    }
    for(int i=1;i<=m;i++)
    {
        int x; cin>>x;
        num2.push_back(x);
    }
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(num1,num2);
    get_usage(argv[0], argv[1]);

    // output
    cout<<result;
    return 0;
}