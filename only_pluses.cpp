#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while (t--) {
        int a,b,c;
        cin>>a>>b>>c;
        int maxe=0;
        for(int i=0;i<=5;i++)
        {
        	for(int j=0;j<=5-i;j++)
        	{
        		for(int k=0;k<=5-i-j;k++)
        		{
        			maxe = max(maxe, (a+i) * (b+j) * (c+k));
        		}
        	}
        }
        cout<<maxe<<endl;
    }

    return 0;
}
