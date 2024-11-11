#include<bits/stdc++.h> 
#define int long long int 
#define endl "\n"
using namespace std;

void solve()
{
	int n; cin>>n;
	if(n%4) {cout<<"NO"<<endl; return;}
	else
	{	cout<<"YES"<<endl;
		int p = n/2;
		for(int i=1;i<=p;i++)
			cout<<2*i<<" ";
		for(int i=1;i<p;i++)
			cout<<2*i-1<<" ";
		cout<<2*p+(p-1)<<endl;
	}
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