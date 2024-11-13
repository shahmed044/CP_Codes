#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin>>n;
	int c25=0, c50=0;
	for(int i=0;i<n;i++)
	{
		int t; cin>>t;
		if(t==25) c25++;
		else if(t==50) {
			if(c25>0){
				c25--;
				c50++;
			}
			else{
				cout<<"NO"; return 0;
			}
		}
		else if(t==100){
			if(c25>0 && c50>0){
				c25--;
				c50--;
			}else if(c25>=3){
				c25-=3;
			}else
			{
				cout<<"NO"; return 0;
			}
		}
	}
	cout<<"YES"<<endl;
	return 0;

}