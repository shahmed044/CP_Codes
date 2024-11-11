#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    vector<int> arr(100005,0);

    int maxi=-1;
    for (int i=0; i<n; i++) {
        int x;
        cin>>x;
        arr[x]++;
        maxi = max(maxi,x);
    }

    vector<int> dp(100005,0);
    dp[0]=0;
    dp[1]=arr[1];
    for(int i=2;i<=100005;i++)
    {
    	dp[i] = max(dp[i-1], dp[i-2]+arr[i]*i);
    }

    cout<<dp[maxi];
    return 0;
}
