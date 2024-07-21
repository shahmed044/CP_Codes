#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	vector<string> bus;

	bool done=false;
	for(int i=0;i<n;i++)
	{
		string s;
		cin>>s;
		for(int i=0;i<6;i++)
		{
			if(s[i]=='O' && s[i+1]=='O' && !done)
			{
				s[i]='+';
				s[i+1]='+';
				done=true;
			}
		}
		bus.push_back(s);
	}

	if(done)
	{
		cout<<"YES\n";
		for(string row: bus)
		{
			cout<<row<<"\n";
		}
	}
	else cout<<"NO";

}