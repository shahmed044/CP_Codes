#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	map<int,vector<int>> mp;
	for(int i=1;i<=n;i++)
	{
		int t; cin>>t;
		mp[t].push_back(i);
	}

	int siz=mp.size();

	vector<pair<int,int>> ans;

	for(auto e:mp)
	{
		if(mp[e.first].size()==1)
			ans.push_back({e.first,0});
		else
		{
			bool flag=false;
			int n = e.second.size();
			int dif=e.second[1]-e.second[0];
			for(int i=0;i<n-1;i++)
			{
				if(e.second[i+1]-e.second[i]!=dif)
					flag=true;
			}
			if(flag)
			{
				siz--; continue;
			}
			else
				ans.push_back({e.first,dif});
		}
	}

	cout<<siz<<endl;
	for(auto i:ans)
		cout<<i.first<<" "<<i.second<<endl;

}