#include <algorithm>
#include<bits/stdc++.h>
#include <ratio>
using ll = long long;
using namespace std;
std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}
int main(int argc, char* argv[]){
    int data = std::atoi(argv[1]);
    int n=data;
    cout<<n<<' '<<n<<endl;
    int len=rng(n/3,n/2);
    vector<int> num;
    for(int i=1;i<=len;i++)
        num.push_back(rng(0,100));
    for(int i=1;i<=2;i++)
    {
        int pos=rng(1,n-len+1);
        for(int j=1;j<pos;j++)
            cout<<rng(0,100)<<' ';
        for(auto it:num) cout<<it<<' ';
        for(int j=pos+len;j<=n;j++)
            cout<<rng(0,100)<<' ';
        cout<<endl;
    }
    return 0;
}