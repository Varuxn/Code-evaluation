#include <bits/stdc++.h>

using namespace std;

// Helper function to generate a random string of a given length
string generateRandomWord(int mxlen) {
    string word;
    int len=rand()%mxlen+1;
    for (int i = 1; i <=len; ++i) {
        word += 'a' + rand() % 26;
    }
    return word;
}
string bas;
string pre()
{
    string s;
    int len=rand()%20;
    for(int j=0;j<len;j++)
        s.push_back(bas[j]);
    len=rand()%20;
    for(int j=0;j<len;j++)
        s.push_back('a' + rand() % 26);
    return s;
}
int main(int argc, char* argv[]) {
    int data = std::atoi(argv[1]);
    srand(static_cast<unsigned>(time(0)));
    int n=data;
    cout<<n<<endl;
    for (int i = 1; i <=40; ++i)
        bas += 'a' + rand() % 26;
    map<string,bool> mp;
    for(int i=1;i<=n;i++)
    {
        string s;
        s=pre();
        while(mp.find(s)!=mp.end())
            s=pre();
        mp.insert({s,true});
        cout<<s<<endl;
    }
    cout<<bas;
    return 0;
}