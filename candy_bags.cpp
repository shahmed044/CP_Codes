#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	int all = n*n;
	
	int j=1;
	int k=all;
	for(int x=0;x<n;x++)
	{
		for(int i=j;i<(j+n/2);i++)
		{
			cout<<i<<" ";
		}
		for(int s=k;s>(k-n/2);s--)
		{
			cout<<s<<" ";
		}
		j=j+n/2;
		k=k-n/2;
		cout<<"\n";
	}

}