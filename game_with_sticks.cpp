#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n,m;
	cin>>n>>m;

	int inter = n*m;
	int cnt=0;
	while(inter)
	{
		inter-=(n+m-1);
		cnt++;
		n--;
		m--;
	}
	if(cnt&1)
		cout<<"Akshat";
	else
		cout<<"Malvika";

}