#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	double l,p,q;
	cin>>l>>p>>q;

	double sec = l/(p+q);
	cout<<p*sec;

}