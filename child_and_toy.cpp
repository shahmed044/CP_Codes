#include<bits/stdc++.h> 
#define int long long int 
#define endl "\n"
using namespace std;

void solve()
{
	int n,m;
	cin>>n>>m;
	vector<int> nums(n);
	for(int i=0;i<n;i++) cin>>nums[i];

	int sum=0;
	for(int i=0;i<m;i++)
	{
		int a,b;
		cin>>a>>b;
		sum+=min(nums[a-1],nums[b-1]);
	}
	cout<<sum<<endl;
}

int32_t main() 
{ 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
#endif 

solve();

    return 0;
} 