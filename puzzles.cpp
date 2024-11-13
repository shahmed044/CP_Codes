#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n,m;
	cin>>n>>m;
	vector<int> arr(m);
	for(int i=0;i<m;i++)
		cin>>arr[i];

	sort(arr.begin(),arr.end());
	int mindif = INT_MAX;

	for(int i=0;i<=(m-n);i++)
	{
		mindif = min(mindif, arr[i+n-1]-arr[i]);
	}
	cout<<mindif;

}