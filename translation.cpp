#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s1,s2;
	cin>>s1>>s2;

	reverse(s1.begin(),s1.end());
	if(s2==s1)
		cout<<"YES";
	else cout<<"NO";

}