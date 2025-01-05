#include<bits/stdc++.h>
using ll = long long;

std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}

void graph(int n, int m) {
// Generate an undirected graph with n vertices and m edges. There are no double edges or self-rings in the graph, and must be connected.
    std::vector<std::pair<int, int>> e;
    std::map<std::pair<int, int>, bool> f;

    std::cout << n << " " << m << "\n";

    for (int i = 1; i < n; i++) {
        int p = rng(0, i - 1);
        e.push_back(std::make_pair(p, i));
        f[std::make_pair(p, i)] = true;
    }

    // debug(f);
    for (int i = n; i <= m; i++) {
        int x, y;
        do {
            x = rng(0, n - 1);
            y = rng(0, n - 1);
        } while ( f.count(std::make_pair(x, y)));

        e.push_back(std::make_pair(x, y));
        f[std::make_pair(x, y)] = true;
    }

    std::shuffle(e.begin(), e.end(), rnd);

    for (auto [x, y] : e) {
        std::cout << x << " " << y << "\n";
    }
}

int main(int argc, char* argv[]) {
    int data = std::atoi(argv[1]);
    int n=data;
    int m=4*data;
    graph(n,m);
    return 0;
}