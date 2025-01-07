#include <bits/stdc++.h>

using namespace std;
std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}
// Helper function to generate a random string of a given length
string generateRandomWord(int mxlen) {
    string word;
    int len=rnd()%mxlen+1;
    for (int i = 1; i <=len; ++i) {
        word += 'a' + rnd() % 26;
    }
    return word;
}

int main(int argc, char* argv[]) {
    int data = std::atoi(argv[1]);
    // int data=10000;
    int n=data;
    cout<<n<<endl;
    vector<string> ch;
    map<string,bool> mp;
    for(int i=1;i<=n;i++)
    {
        string s=generateRandomWord(20);
        while(mp.find(s)!=mp.end()) s=generateRandomWord(20);
        mp.insert({s,true});
        ch.push_back(s);
        cout<<s<<endl;
    }
    string str;
    bool flag=rnd()&1;
    while((int)str.size()+20<n)
    {
        int pos=rnd()%((int)ch.size());
        str+=ch[pos];
        if(flag) str+="s";
        // cout<<n-20<<' '<<str.size()<<' '<<(str.size()<n-20)<<' '<<ch[pos]<<endl;
    }
    cout<<str;
    return 0;
}