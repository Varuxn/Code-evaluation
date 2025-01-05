#include<bits/stdc++.h>
using ll = long long;
using namespace std;
std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}

// Function to generate a random string of given length
string generateRandomString(int length,int siz) {
    static const string charset = "abcdefghijklmnopqrstuvwxyz";
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, siz);

    string result;
    for (int i = 0; i < length; ++i) {
        result += charset[dist(gen)];
    }
    return result;
}

// Function to generate a string with many palindromic substrings
string generatePalindromeRichString(int length,int siz) {
    string half = generateRandomString(length / 2,siz);
    string palindrome = half + string(half.rbegin(), half.rend());
    if (length % 2 != 0) {
        palindrome.insert(palindrome.begin() + length / 2, 'a');
    }
    return palindrome;
}

int main(int argc, char* argv[]){
    int data = std::atoi(argv[1]);
    int n=data;
    string str;
    while(str.size()<n)
    {
        int len=rnd()%30+1;
        str+=generatePalindromeRichString(len,rnd()%20);
    }
    while(str.size()>n) str.pop_back();
    cout<<str;
    return 0;
}