#include<bits/stdc++.h>
using ll = long long;

std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}

void array(int n, int lim) { // Generates an array with n elements
    int m = lim;
    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = rng(1, m);
        std::cout << a[i] << " \n"[i == n - 1];
    }
}

int main(int argc, char* argv[]) {
    int data = std::atoi(argv[1]);
    int n=data; if(n&1) n--;
    std:: cout<<n<<'\n';
    array(n,std::max(10,n/10));
    return 0;
}