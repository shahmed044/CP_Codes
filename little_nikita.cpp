#include<bits/stdc++.h> 
using namespace std;

int main() 
{ 

#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
#endif 
    int n;
    cin>>n;
    while(n--)
    {
    	int n,m;
    	cin>>n>>m;

    	if(n<m)
    		cout<<"NO\n";
    	else
    	{
    		if((n-m)%2==0)
    			cout<<"YES\n";
    		else
    			cout<<"NO\n";
    	}
    }

} 