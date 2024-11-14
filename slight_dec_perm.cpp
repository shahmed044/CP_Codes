#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n,k;
	cin>>n>>k;

	for(int i=1;i<=(n-k-1);i++)
		cout<<i<<" ";
	for(int i=n;i>(n-k-1);i--)
		cout<<i<<" ";
		
}