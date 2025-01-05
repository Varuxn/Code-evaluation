#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int n; cin>>n;
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
    int result = solution.solve(num);
    get_usage(argv[0], argv[1]);

    // output
    cout<<result;
    return 0;
}