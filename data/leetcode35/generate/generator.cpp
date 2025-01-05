#include <algorithm>
#include<bits/stdc++.h>
#include <ratio>
using ll = long long;
using namespace std;
std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}
bool s[100010];
int main(int argc, char* argv[]){
    int data = std::atoi(argv[1]);
    int n=data;
    int k=rng(10,n/3);
    cout<<n<<' '<<k;
    int m=rng(n/2,n);
    for(int i=1;i<=m;i++)
    {
        int l=rng(1,n-k+1);
        int r=l+k-1;
        s[l]^=1; s[r+1]^=1;
    }
    int pre=0;
    for(int i=1;i<=n;i++)
    {
        pre^=s[i];
        cout<<pre<<' ';
    }
    return 0;
}