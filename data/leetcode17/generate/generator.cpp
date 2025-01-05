#include<bits/stdc++.h>
using ll = long long;
using namespace std;
std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}
int g[1010][1010];
int main(int argc, char* argv[]) {
    int data = std::atoi(argv[1]);
    int n=rng(std::max(10,data-10),data);
    int m=rng(std::max(10,data-10),data);
    cout<<n<<' '<<m<<endl;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(rnd()%3) g[i][j]=1;
            else g[i][j]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<g[i][j]<<' ';
        cout<<endl;
    }
    int lim=rng(n/2,n);
    for(int i=1;i<=lim;i++)
    {
        int x=rng(1,n);
        int y=rng(1,m);
        g[x][y]^=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<g[i][j]<<' ';
        cout<<endl;
    }
    return 0;
}