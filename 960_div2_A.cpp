#include<bits/stdc++.h> 
#define int long long int 
using namespace std;

void solve()
{
	int n;
	cin>>n;
	// vector<int> arr(n);
	unordered_map<int,int> mp;
	int t;
	for(int i=0;i<n;i++)
	{
		cin>>t;
		mp[t]++;
	}
	bool flag=false;
	for(auto i:mp)
	{
		if((i.second)%2!=0)
		{
			flag=true;
			break;
		}
	}

	if(flag) cout<<"YES\n";
	else cout<<"\n";
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