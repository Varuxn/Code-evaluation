#include<bits/stdc++.h>
using ll = long long;

std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}

int main(int argc, char* argv[]) {
    int data = std::atoi(argv[1]);
    int n=rng(std::max(10,data-10),data);
    int m=rng(std::max(10,data-10),data);
    std::cout<<n<<' '<<m<<'\n';
    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<=m;i++)
        {
            if(rnd()%4) std::cout<<1<<' ';
            else std::cout<<0<<' ';
        }
        putchar('\n');
    }
    return 0;
}