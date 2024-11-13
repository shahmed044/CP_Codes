#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n; cin>>n;
	vector<int> boys(n);
	for(int i=0;i<n;i++) cin>>boys[i];
	sort(boys.begin(), boys.end());

	int m; cin>>m;
	vector<int> girls(m);
	for(int i=0;i<m;i++) cin>>girls[i];
	sort(girls.begin(), girls.end());

	int cnt=0;
	int i=0, j=0;
	while(i<n && j<m)
	{
		if(abs(boys[i]-girls[j])<=1){
			cnt++;
			i++;
			j++;
		}
		else if(boys[i]<girls[j]){
			i++;
		}
		else
			j++;
	}

	cout<<cnt<<endl;

}