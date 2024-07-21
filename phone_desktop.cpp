#include<bits/stdc++.h> 
#define int long long int 
using namespace std;

void solve()
{
	int x,y;
	cin>>x>>y;
	int screen=0;

	if(x==0 && y==0)
	{
		cout<<0<<endl;
		return;
	}
	
	while(true)
	{
		if(y>=2)
		{
			x-=7;
			y-=2;
		}
		else if(y==1)
		{
			x-=11;
			y-=1;
		}
		else
		{
			x-=15;
		}

		if(x<=0) x=0;
		if(y<=0) y=0;
		screen++;
		if(x==0 && y==0) break;
	}

	cout<<screen<<endl;
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