#include<bits/stdc++.h> 
#define int long long int 
using namespace std;

void solve()
{
	int n,k;
	cin>>n>>k;
	vector<int> arr(k);
	for(int i=0;i<k;i++)
		cin>>arr[i];

	int cnt=0;
	sort(arr.begin(),arr.end());
	for(int i=0;i<k-1;i++)
	{
		cnt+=arr[i]-1;
	}

	cnt+=(n-arr[k-1]);
	cout<<cnt<<endl;
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