#include<bits/stdc++.h> 
#define int long long int 
using namespace std;

void solve()
{
	int n; string s;
	cin>>n>>s;
	int oc=0, zc=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1') oc++;
		if(s[i]=='0')
		{
			zc++;
			while(s[i+1]=='0' && i<n)
			{
				i++;
			}
		}
	}

	if(zc>=oc)cout<<"NO\n";
	else
		cout<<"YES\n";

}

int32_t main() 
{ 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
#endif 

    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
} 