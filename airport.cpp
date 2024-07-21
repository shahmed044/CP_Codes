#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int k,n;
	cin>>k>>n;
	vector<int> planes(n);

	for(int i=0;i<n;i++)
		cin>>planes[i];

	long long int sum=0;
	long long int tsum=0;
	for(int plane : planes)
	{
		sum+=plane;
		tsum+=(plane*(plane+1))/2;
	}

	if(k>=sum)
	{
		cout<<tsum<<" "<<tsum;
		return 0;
	}

	sort(planes.begin(),planes.end());
	vector<int> planes2(planes);

	long long int minsum=0;
	long long int maxsum=0;

	int k2=k;
	for(int i=0;i<n && k>0 ;i++)
	{
		while(planes[i]>0 && k>0)
		{
			k--;
			minsum+=planes[i];
			planes[i]--;;
		}
	}

	priority_queue<int> pq;
    for (int plane : planes2)
        pq.push(plane);

    while(k2>0)
    {
    	int top=pq.top();
    	pq.pop();
    	maxsum+=top;
    	if(--top > 0)
    		pq.push(top);
    	k2--;
    }
	
	cout<<maxsum<<" "<<minsum;

return 0;
}