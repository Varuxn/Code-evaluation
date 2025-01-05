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

int main(int argc, char* argv[]) {
    int data = std::atoi(argv[1]);
    srand(static_cast<unsigned>(time(0)));
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
    while(str.size()<n-20)
    {
        int pos=rand()%((int)ch.size());
        str+=ch[pos];
    }
    if(rand()%4==0)
    {
        str.push_back('a');
    }
    cout<<str;
    return 0;
}