#include <bits/stdc++.h>
#include <iterator>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int n,k; cin>>n>>k;
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(n,k);
    get_usage(argv[0], argv[1]);

    // output
    cout<<result;
    return 0;
}