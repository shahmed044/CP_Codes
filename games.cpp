#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin>>n;
	vector<int> v1(n);
	vector<int> v2(n);
	for(int i=0;i<n;i++)
	{
		cin>>v1[i]>>v2[i];
	}
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			if(v1[i]==v2[j]) cnt++;
	}
	cout<<cnt;

}