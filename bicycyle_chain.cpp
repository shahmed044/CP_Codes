#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin>>a[i];

	int m; cin>>m;
	vector<int> b(m);
	for(int i=0;i<m;i++) cin>>b[i];

	long long int cnt=0;
	int mx=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(b[i]%a[j]==0)
			{
				int el = b[i]/a[j];
				if(el==mx) cnt++;
				else if(el > mx){
					mx = el;
					cnt=1;
				}
				else
					continue;
			}
		}
	}

	cout<<cnt;

}