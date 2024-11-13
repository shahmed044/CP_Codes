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
	int dif=INT_MAX;
	int id1,id2;

	for(int i=0;i<n;i++)
	{
		if(abs(arr[(i+1)%n]-arr[i]) < dif)
			{
				dif = abs(arr[(i+1)%n]-arr[i]);
				id1=i; id2=(i+1)%n;
			}
	}

	cout<<id1+1<<" "<<id2+1<<endl;

}