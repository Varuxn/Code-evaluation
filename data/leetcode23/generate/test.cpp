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
    vector<string> dic;
    string s;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        dic.push_back(s);
    }
    cin>>s;
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(s,dic);
    get_usage(argv[0], argv[1]);

    // output
    cout<<result;
    return 0;
}