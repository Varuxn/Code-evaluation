#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int n; cin >> n;
    vector<vector<int> > r;
    for(int i=1;i<n;i++)
    {
        vector<int> temp;
        for(int j=1;j<=n-i;j++)
        {
            int x; cin>>x;
            temp.push_back(x);
        }
        r.push_back(temp);
    }

    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(n,r);
    get_usage(argv[0], argv[1]);

    // output
    cout << result << "\n";

    return 0;
}