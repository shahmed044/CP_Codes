#include<bits/stdc++.h> 
#define int long long int 
using namespace std;

void solve()
{
	int n,k;
	cin>>n>>k;
	n--;
	k--;
	cout<<min(n%k,1ll)+n/k <<endl;
}

int32_t main() 
{ 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
#endif 

    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
} 