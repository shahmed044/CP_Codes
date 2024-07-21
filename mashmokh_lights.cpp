#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n,m;
	cin>>n>>m;
	vector<int> lights(n+1,-1);

	int t;
	while(m--)
	{
		cin>>t;
		for(int i=t;i<=n;i++)
		{
			if(lights[i]==-1)
				lights[i]=t;
		}
	}

	for(int i=1;i<=n;i++)
		cout<<lights[i]<<" ";

}