#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; 
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];

	sort(arr.begin(), arr.end());

	int q; cin>>q;
	for(int i=0;i<q;i++)
	{
		int m;
		cin>>m;
		cout<<upper_bound(arr.begin(), arr.end(), m) -arr.begin()<<endl; //returns index
	}
	return 0;

}