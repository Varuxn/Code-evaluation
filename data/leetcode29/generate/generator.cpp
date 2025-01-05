#include <algorithm>
#include<bits/stdc++.h>
#include <ratio>
using ll = long long;
using namespace std;
std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}
int main(int argc, char* argv[]){
    int data = std::atoi(argv[1]);
    int n=data,m=data;
    int k=rng(1,n*m);
    cout<<n<<' '<<m<<' '<<k<<endl;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<rng(1,1e6)<<' ';
        cout<<endl;
    }
    return 0;
}