#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin>>n;
	int x=0;
	int energy=0,sol=0;
	int y;

	for(int i=1;i<=n;i++)
	{
		cin>>y;
		energy += (x-y);

		if(energy<0){
			sol += -energy;
			energy=0;
		}

		x=y;
	}

	cout<<sol<<endl;
}