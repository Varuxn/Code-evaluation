#include<bits/stdc++.h>
using namespace std;


std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}

struct Node
{
    int l,r,val;
}tre[100010];

int tot=0;
int s[30];
void insert(int &x)
{
    if(x==0)
    {
        x=++tot;
        tre[x].val=s[tot];
        tre[x].l=tre[x].r=0;
        return ; 
    }
    if(rnd()&1) insert(tre[x].l);
    else insert(tre[x].r);
}

void indfs(int root, string& mid) {
    if (!root) return;
    indfs(tre[root].l, mid);
    mid.push_back(tre[root].val);
    indfs(tre[root].r, mid);
}

void sufdfs(int root, string& suf) {
    if (!root) return;
    sufdfs(tre[root].l, suf);
    sufdfs(tre[root].r, suf);
    suf.push_back(tre[root].val);
}

int main(int argc, char* argv[]){
    int data = std::atoi(argv[1]);
    int n=data;
    for(int i=1;i<=26;i++) s[i]=i-1+'A';
    random_shuffle(s+1,s+27);
    int root=++tot; tre[1].val=s[1];
    for(int i=1;i<=n;i++) insert(root);
    string mid, suf;
    indfs(root, mid);
    sufdfs(root, suf);

    cout<<mid<<endl<<suf;
    return 0;
}