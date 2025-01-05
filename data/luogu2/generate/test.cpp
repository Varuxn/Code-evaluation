#include <bits/stdc++.h>
#include "execute.h"
#include "std.h"
using namespace std;
int main(int argc, char *argv[])
{
    catch_error(argc);

    // input
    int m,n,k,l,d;
    cin>>m>>n>>k>>l>>d;
    vector<vector<int> > seats;
    for(int i=1;i<=d;i++)
    {
        vector<int> temp;
        for(int j=1,x;j<=4;j++)
        {
            cin>>x;
            temp.push_back(x);
        }
        seats.push_back(temp);
    }
    // solve
    Solution solution;
    get_usage(argv[0], argv[1]);
    set_cpu_limit();
    pair<vector<int>,vector<int> > result = solution.solve(m,n,k,l,d,seats);
    get_usage(argv[0], argv[1]);

    // output
    for(int i=0;i<result.first.size();i++)
    {
        printf("%d",result.first[i]);
        if(i==result.first.size()-1) cout<<endl;
        else cout<<' ';
    }
    for(int i=0;i<result.second.size();i++)
    {
        printf("%d",result.second[i]);
        if(i==result.second.size()-1);
        else cout<<' ';
    }
    return 0;
}