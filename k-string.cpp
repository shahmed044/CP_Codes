#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	string s;
	cin>>s;

	bool flag=false;
	unordered_map<char,int> mp;
	for(char i:s)
		mp[i]++;
	for(auto el:mp)
	{
		if(el.second%n!=0)
		{
			flag=true;
			break;
		}
	}
	if(flag){
		cout<<-1<<endl;
		return 0;
	} 
		string ans="";
		for(int i=0;i<n;i++)
		{
			for(auto i:mp)
			{
				for(int j=0;j<i.second/n;j++)
					ans+=i.first;
			}
		}

		cout<<ans<<endl;

}