#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    string N;
    int K; cin >> N >> K;
    vector<pair<int,int> > rules;
    for (int i = 0; i < K; i++)
    {
        int x,y; cin >>x>>y;
        rules.push_back({x,y});
    }

    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(N,K,rules);
    get_usage(argv[0], argv[1]);

    // output
    cout << result ;

    return 0;
}