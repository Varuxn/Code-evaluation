#include<bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]) {
    srand(time(0));
    int data = std::atoi(argv[1]);
    if(data<=10) cout<<data;
    else cout<<data-10+rand()%5*2;
    return 0;
}