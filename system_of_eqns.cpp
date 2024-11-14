#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a,b;
	cin>>a>>b;
	int n = sqrt(max(a,b));

	int cnt=0;
	for(int i=0;i<=n;i++)
		for(int j=0;j<=n;j++)
		{
			if((i*i+j == a) && (j*j+i == b))
				cnt++;
		}
	cout<<cnt;

}