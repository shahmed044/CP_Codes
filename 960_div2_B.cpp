#include<bits/stdc++.h> 
#define int long long int 
using namespace std;

void solve()
{
	int n,x,y;
	cin>>n>>x>>y;
	x--;y--;
	vector<int> arr(n,0);

	if(n==2) 
	{
		cout<<"1"<<" "<<"1"<<endl;
		return;
	}

	bool f=false;
	for(int i=x+1;i<n;i++)
	{
		if(f) arr[i] = 1;
		else arr[i] = -1;
		f=!f;
	}
	
	for(int i=y;i<=x;i++)
		arr[i]=1;

	f=false;
	for(int i=y-1;i>=0;i--) 
	{
		if(f) arr[i] = 1;
		else arr[i] = -1;
		f=!f;
	}
	

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
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