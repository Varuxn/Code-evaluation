#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    string str; cin>>str;
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(str);
    get_usage(argv[0], argv[1]);

    // output
    for(auto it:result) cout<<it;
    return 0;
}