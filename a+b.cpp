#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		string a="",b="";
		bool flag =false;
		for(char c:s)
		{
			a+=c;
			if(c=='+')
			{
				flag=true;
				continue;
			}
			if(flag)
				b+=c;
		}

		cout<<stoi(a)+stoi(b)<<endl;
	}
}