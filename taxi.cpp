#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	unordered_map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		int t; cin>>t;
		mp[t]++;
	}

	int taxi=0;
	taxi+=mp[4];
	taxi+=(mp[2]+1)/2;
	taxi+=mp[3];
	mp[1]-=min(mp[1],mp[3]);
	if(mp[2]%2) mp[1]-=2;
	taxi+=(mp[1]+3)/4;
		
	cout<<taxi<<endl;

}