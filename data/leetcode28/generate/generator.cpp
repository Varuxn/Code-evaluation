#include <algorithm>
#include<bits/stdc++.h>
using ll = long long;
using namespace std;
std::mt19937_64 rnd(std::chrono::steady_clock().now().time_since_epoch().count());

int rng(int l, int r) { // [l, r]
    return rnd() % (r - l + 1) + l;
}
const int N=1e7+10;
int cnt,pri[N];
bool vis[N];

void Prime()
{
	int temp=2e6;
	for(int i=2;i<=temp;i++)
	{
		if(!vis[i])	pri[++cnt]=i;
		for(int j=1;j<=cnt&&pri[j]*i<=temp;j++)
		{
			vis[i*pri[j]]=true;
			if(i%pri[j]==0)	break;
		}
	}
}

int main(int argc, char* argv[]){
    int data = std::atoi(argv[1]);
    long long n=data; Prime();
    long long k=min(1000000000ll,n*(n-1)/2);
    k=rng(k/2,k);
    cout<<n<<' '<<k<<endl;
    random_shuffle(pri+1,pri+cnt+1);
    sort(pri+1,pri+n+1);
    for(int i=1;i<=n;i++) cout<<pri[i]<<' ';
    return 0;
}