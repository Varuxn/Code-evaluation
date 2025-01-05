#include <algorithm>
#include<bits/stdc++.h>
#include <ratio>
using ll = long long;
using namespace std;
std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}
int ch[5]={'A','C','G','T'};
string get()
{
    string str;
    for(int i=1;i<=10;)
    {
        int lim=11-i;
        int num=rng(1,lim);
        // cout<<i<<' '<<num<<endl;
        char c=ch[rnd()%4];
        for(int j=1;j<=num;j++)
            str.push_back(c);
        i+=num;
    }
    // cout<<"Test"<<str<<endl;
    return str;
}
int main(int argc, char* argv[]){
    int data = std::atoi(argv[1]);
    int n=data;
    int m=rng(3,n/20);
    // cout<<m<<endl;
    vector<string> s;
    for(int i=1;i<=m;i++)
    {
        string str=get();
        s.push_back(str);
        s.push_back(str);
    }
    for(int i=20*m;i<=n;i++)
    {
        string str=get();
        str.push_back(ch[rnd()%4]);
        s.push_back(str);
    }
    random_shuffle(s.begin(),s.end());
    for(auto it:s) cout<<it;
    return 0;
}