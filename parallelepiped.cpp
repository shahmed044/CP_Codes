#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	int l,m,n;
	cin>>l>>m>>n;
	
	int a = (int)sqrt((l*m)/n);
	int b = (int)sqrt((m*n)/l);
	int c = (int)sqrt((n*l)/m);
 
	cout<<4*(a+b+c);
 
}