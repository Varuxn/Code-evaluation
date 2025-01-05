#include<bits/stdc++.h>
using ll = long long;
using namespace std;
std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}
bool vis[100010];
int main(int argc, char* argv[]) {
    int data = std::atoi(argv[1]);
    int n=data;
    int m=rng(1,n/2);
    cout<<n<<' '<<m<<endl;
    for(int i=1;i<n;i++)
        cout<<i<<' '<<rng(0,i-1)<<' ';
    cout<<endl;
    for(int i=1;i<=m;i++)
    {
        int x=rng(1,n-1);
        while(vis[x]) x=rng(1,n-1);
        vis[x]=true; cout<<x<<' ';
    }
    return 0;
}