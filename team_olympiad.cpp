#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	vector<vector<int>> arr(3);
	for(int i=1;i<=n;i++)
	{
		int x;
		cin>>x;
		if(x==1) arr[0].push_back(i);
		else if(x==2) arr[1].push_back(i);
		else arr[2].push_back(i);
	}

	int minn = min({arr[0].size(), arr[1].size(), arr[2].size()});
	if(minn==0)
	{
		cout<<0;
		return 0;
	}
	else
	{	cout<<minn<<endl;
		for(int i=0;i<minn;i++)
		{
			cout<<arr[0][i]<<" "<<arr[1][i]<<" "<<arr[2][i]<<"\n";
		}
	}



}