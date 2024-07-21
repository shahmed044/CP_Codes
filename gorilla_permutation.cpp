#include<bits/stdc++.h> 
#define int long long int 
using namespace std;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> seq(n);

    for (int i=0; i<n-m; ++i) 
        seq[i] = n-i;

    for (int i=n-m; i<n; ++i) 
        seq[i] = i-(n-m)+1;

    for (int i=0; i<n; ++i) 
        cout<<seq[i]<< " ";

    cout<<"\n";

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