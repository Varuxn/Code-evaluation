#include<bits/stdc++.h>
using ll = long long;
using namespace std;
std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}

int main(int argc, char* argv[]) {
    int data = std::atoi(argv[1]);
    int n = rng(1, data); cout<<n<<endl;
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            cout<<rng(1,1000)<<' ';
        cout<<endl;
    }
    return 0;
}