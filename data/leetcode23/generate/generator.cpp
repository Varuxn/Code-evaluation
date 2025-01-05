#include <bits/stdc++.h>

using namespace std;

// Helper function to generate a random string of a given length
string generateRandomWord(int mx) {
    string word;
    int len=rand()%9+2;
    for (int i = 1; i <=len; ++i) {
        word += 'a' + rand() % mx;
    }
    return word;
}

int main(int argc, char* argv[]) {
    int data = std::atoi(argv[1]);
    srand(static_cast<unsigned>(time(0)));
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
        putchar('a'+rand()%mx);
    return 0;
}