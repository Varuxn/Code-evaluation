#include<bits/stdc++.h>
using ll = long long;
using namespace std;
std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}

int main(int argc, char* argv[]) {
    int data = std::atoi(argv[1]);
    int n=rng(std::max(10,data-10),data);
    cout<<n<<endl;
    map<pair<int,int>,bool> mp;
    for(int i=1;i<=n;i++)
    {
        int x=rng(-1e6,1e6);
        int y=rng(-1e6,1e6);
        while(mp.find({x,y})!=mp.end())
        {
            x=rng(-1e6,1e6);
            y=rng(-1e6,1e6);
        }
        mp.insert({{x,y},true});
        cout<<x<<' '<<y<<endl;
    }
    return 0;
}