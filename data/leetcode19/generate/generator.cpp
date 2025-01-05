#include<bits/stdc++.h>
using ll = long long;
using namespace std;
std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}

void graph(int n, int m) {
// Generate an undirected graph with n vertices and m edges. There are no double edges or self-rings in the graph, and must be connected.
    std::vector<std::pair<pair<int,int>, int> > e;
    std::map<std::pair<pair<int,int> ,int>, bool> f;

    std::cout << n << " " << m << "\n";

    for (int i = 1; i < n; i++)
    {
        for(int j=1;j<=2;j++)
        {
            int p = rng(0, i - 1);
            int val= rng(1,3);
            e.push_back({{p,i},val});
            f[{{p,i},val}] = f[{{i,p},val}] = true;
        }
    }

    // debug(f);
    for (int i = 2*n-1; i <= m; i++) {
        int x, y, z;
        do {
            x = rng(0, n - 1);
            y = rng(0, n - 1);
            z = rng(1,3);
        } while (x == y || f.count({{x,y},z}));

        e.push_back({{x,y},z});
        f[{{x,y},z}] = f[{{y,x},z}] = true;
    }

    std::shuffle(e.begin(), e.end(), rnd);

    for (auto [x, y] : e) {
        cout << y<< " " << x.first+1<<' '<<x.second+1 << "\n";
    }
}

int main(int argc, char* argv[]) {
    int data = std::atoi(argv[1]);
    int n=data;
    int m=4*n;
    graph(n,m);

    return 0;
}