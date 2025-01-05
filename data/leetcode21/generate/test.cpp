#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int n,m;
    cin>>n>>m;
    vector<string> words;
    string text;
    for(int i=1;i<=n;i++)
    {
        string s; cin>>s;
        words.push_back(s);
    }
    for(int i=1;i<=m;i++)
    {
        string s; cin>>s;
        text+=s;
        if(i!=m) text+=" ";
    }
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    auto result = solution.solve(words,text);
    get_usage(argv[0], argv[1]);

    // output
    cout<<result;
    return 0;
}