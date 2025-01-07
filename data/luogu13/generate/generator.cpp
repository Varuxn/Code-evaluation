#include<bits/stdc++.h>
using namespace std;
std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}

int main(int argc, char* argv[]) {
    int data = std::atoi(argv[1]);
    if(data<=10) cout<<data;
    else cout<<data-20+rnd()%10*2;
    return 0;
}