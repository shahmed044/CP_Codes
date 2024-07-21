#include<bits/stdc++.h> 
#define int long long int 
using namespace std;

void solve()
{
	int n;
	cin>>n;
	vector<int> arr(n);

	int ans=0;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		ans+=arr[i];
	}

	unordered_map<int,int> mp;
	vector<int> mad(n);
	int md=0;
	for(int i=0;i<n;i++)
	{
		mp[arr[i]]++;
		if(mp[arr[i]]>=2)
			md = max(md,arr[i]);
		mad[i] = md;
	}

	mp.clear();
	for(auto i:mad) mp[i]++;

	int prev=0;
	for(int i=0;i<n;i++)
	{
		ans+=mad[i];
		if(mp[mad[i]]>1)
		{
			ans+= (n-i-1)*mad[i];
			prev=mad[i];
		}
		else
			ans+= (n-i-1)*prev;
	}

	cout<<ans<<endl;
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