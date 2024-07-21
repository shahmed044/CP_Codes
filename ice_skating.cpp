#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	vector<pair<int,int>> points;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		points.push_back({x,y});
	}

	int cnt=0;
	for(int i=0;i<points.size();i++)
	{
		for(int j=i+1;j<points.size();j++)
		{
			if(points[i].first-points[j].first==0 || points[i].second-points[j].second==0)
				continue;
			else
				cnt++;
		}
	}
	cout<<cnt<<endl;


}