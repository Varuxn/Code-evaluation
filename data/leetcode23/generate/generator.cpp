#include <bits/stdc++.h>

using namespace std;

// Helper function to generate a random string of a given length
std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}
string generateRandomWord(int mx) {
    string word;
    int len=rnd()%9+2;
    for (int i = 1; i <=len; ++i) {
        word += 'a' + rnd() % mx;
    }
    return word;
}

int main(int argc, char* argv[]) {
    int data = std::atoi(argv[1]);
    int n=data;
    int mx=log10(n)+3;
    cout<<n<<endl;
    map<string,bool> mp;
    for(int i=1;i<=n;i++)
    {
        string s=generateRandomWord(mx);
        while(mp.find(s)!=mp.end())
            s=generateRandomWord(mx);
        cout<<s<<endl;
    }
    for(int i=1;i<=n;i++)
        putchar('a'+rnd()%mx);
    return 0;
}