#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int n,m,p1,s1,s2;
    cin>>n;
    vector<int> c;
    for(int i=1,x;i<=n;i++)
    {
        cin>>x;
        c.push_back(x);
    }
    cin>>m>>p1>>s1>>s2;
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(n,m,p1,s1,s2,c);
    get_usage(argv[0], argv[1]);

    // output
    cout << result << "\n";

    return 0;
}