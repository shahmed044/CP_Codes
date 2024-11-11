#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int money=0;
	if (b < m*a)
	{
		money += (n/m)*b;
		money += min((n%m)*a, b);
	}
	else
	{
		money = n*a;
	}
	cout<<money<<endl;

}