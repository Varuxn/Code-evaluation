#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int n; string str; cin>>str>>n;
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    int result = solution.solve(str,n);
    get_usage(argv[0], argv[1]);

    // output
    cout<<result;
    return 0;
}