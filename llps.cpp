#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin>>s;
	char m = *max_element(s.begin(),s.end());
	int cnt=0;
	string ans="";
	for(char c:s)
		if(c==m)
		{
			cnt++;
			ans+=c;
		}
	cout<<ans;
}