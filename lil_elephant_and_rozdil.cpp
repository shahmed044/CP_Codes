#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];

	int mine = *min_element(arr.begin(),arr.end());
	int cnt=0,id=0;

	for(int i=0;i<n;i++)
	{
		if(arr[i]==mine){
			id=i+1;
			cnt++;
		}
	}

	if(cnt>1)
		cout<<"Still Rozdil\n";
	else
		cout<<id<<endl;

}