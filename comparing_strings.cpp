#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s1, s2;
	cin>>s1>>s2;

	if(s1.size() != s2.size()) {
		cout<<"NO"<<endl;
		return 0;
	}
	int cnt=0;
	for(int i=0; i<s1.size(); i++)
	{
		if(s1[i]!=s2[i]) cnt++;
	}

	if (s1 == s2) {
        unordered_map<char,int> mp;
        for (char c : s1) {
            mp[c]++;
            if (mp[c]>1) {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;
        return 0;
    }

	vector<int> diff;
    for (int i=0; i<s1.size(); i++) {
        if (s1[i] != s2[i]) {
            diff.push_back(i);
        }
    }

    if (diff.size() == 2 &&
        s1[diff[0]] == s2[diff[1]] &&
        s1[diff[1]] == s2[diff[0]]) {
        cout<<"YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }

}