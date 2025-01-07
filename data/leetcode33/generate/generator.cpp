#include <algorithm>
#include<bits/stdc++.h>
#include <iterator>
#include <ratio>
using ll = long long;
using namespace std;
std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}
int main(int argc, char* argv[]){
    int data = std::atoi(argv[1]);
    // int data=10;
    int n=data,k=rng(1,20);
    int flag=rnd()&1;
    if(flag)
    {
        for(int i=1;i<=n;i++) cout<<rng(0,1);
    }
    else
    {
        k=rng(1,log2(n));
        vector<string> v;
        for(int sta=0;sta<(1ll<<k+1);sta++)
        {
            string str;
            for(int i=1;i<=k;i++)
                str.push_back('0'+((sta>>i-1)&1));
            v.push_back(str);
        }
        random_shuffle(v.begin(),v.end());
        string s;
        for(auto it:v) s+=it;
        while((int)s.size()<n) s.push_back((rnd()&1)+'0');
        cout<<s;
    }
    cout<<endl<<k;
    return 0;
}