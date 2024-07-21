#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int k,r;
	cin>>k>>r;

	for(int i=1;i<1000;i++)
	{
		if((i*k)%10==0 || (i*k)%10==r)
		{
			cout<<i;
			break;
		}
	}

}