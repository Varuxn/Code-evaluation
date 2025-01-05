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
    string bas;
    for(int i=1;i<=n;i++)
    {
        cin>>bas;
        dic.push_back(bas);
    }
    cin>>bas;
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(dic,bas);
    get_usage(argv[0], argv[1]);

    // output
    for(auto it:result)
    {
        for(auto str:it)
            cout<<str<<' ';
        cout<<endl;
    }
    return 0;
}