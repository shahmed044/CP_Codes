#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin>>n;

	int z=0,f=0;
	for(int i=0;i<n;i++)
	{	
		int t; cin>>t;
		if(t==5)f++;
		else z++;
	}

	string ans="";
	if(z==0)
	{
		cout<<-1;
		return 0;
	}

	if(z>0 && (f/9)>0)
	{
		for(int i=0;i<(f/9);i++)
			ans+="555555555";
		for(int i=0;i<z;i++)
			ans+="0";
		cout<<ans;
		return 0;
	}

	if(z>0 && (f/9)==0)
	{
		cout<<0;
		return 0;
	}

}