#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int k,N; cin >> k >> N;
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(k,N);
    get_usage(argv[0], argv[1]);

    // output
    cout << result << "\n";

    return 0;
}