#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n,k;
	cin>>n>>k;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int minsum=INT_MAX;
	int j=0;
	int sum=0;
	for(int i=0;i<k;i++)
		sum+=arr[i];
	minsum=min(minsum,sum);

	for(int i=k; i<n; i++)
	{
		sum-=arr[i-k];
		sum+=arr[i];
		if(sum<minsum){
			j=i-k+1;
			minsum = min(minsum,sum);
		}
	}
	cout<<j+1<<endl;

}