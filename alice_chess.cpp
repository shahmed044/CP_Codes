#include<bits/stdc++.h> 
#define int long long int 
#define endl "\n"
using namespace std;

void solve()
{
	int n,x,y;
	cin>>n>>x>>y;
	string s;
	cin>>s;

	int a=0;
	int b=0;
	for(int j=0; j<100; j++){
		for(int i=0;i<n;i++)
		{
			if(s[i]=='N') b++;
			else if(s[i]=='S') b--;
			else if(s[i]=='E') a++;
			else a--;

			if(a==x && b==y){
				cout<<"YES"<<endl;
				return;
			}
		}
	}
	
	cout<<"NO"<<endl;
	return;
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