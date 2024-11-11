#include<bits/stdc++.h> 
#define int long long int 
#define endl "\n"
using namespace std;

void solve()
{
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> arr;
    for(int i=0;i<n;i++){
        int t1,t2;
        cin>>t1>>t2;
        arr.push_back({t1,t2});
    }
    sort(arr.begin(),arr.end());

    int flag=false;
    for(int i=0;i<n;i++)
    {
        if(s<arr[i].first){
            flag=true; break;
        }
        s+=arr[i].second;
    }

    if(flag)cout<<"NO\n";
    else cout<<"YES\n";

}

int32_t main() 
{ 
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
#endif 

 solve();

    return 0;
} 