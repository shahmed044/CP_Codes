#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	for(int i=0;i<n+1;i++)
	{
		int spaces = 2*abs(n-i);
		for(int i=0;i<spaces;i++)cout<<" ";
			cout<<0;
		int st=1;
		for(int j=0;j<i;j++) {cout<<" "<<st; st++;}
		st=i-1;
		for(int j=0;j<i;j++) {cout<<" "<<st; st--;}
		cout<<endl;
	}

	for(int i=n-1;i>=0;i--)
	{
		int spaces = 2*abs(n-i);
		for(int i=0;i<spaces;i++)cout<<" ";
			cout<<0;
		int st=1;
		for(int j=0;j<i;j++) {cout<<" "<<st; st++;}
		st=i-1;
		for(int j=0;j<i;j++) {cout<<" "<<st; st--;}
		cout<<endl;
	}
}