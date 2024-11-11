#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n,t;
	cin>>n>>t;
	vector<int> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];

	int l=0,r=0;
	int maxlen=0;

	while(r<n)
	{
		if(t-arr[r]<0)
		{
			while(l<=r && t-arr[r]<0)
			{
				t+=arr[l];
				l++;
			}
		}

		if(t-arr[r]>=0)
			t-=arr[r];
		r++;
		maxlen = max(maxlen,r-l);

	}
	cout<<maxlen;

}