#include<bits/stdc++.h>
using namespace std;

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin>>n;
	cout<<(n*n+1)/2<<endl;

	vector<vector<char>> board(n,vector<char>(n,'.'));

	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if((i+j)%2==0)
				board[i][j]='C';
    
    for(int i=0;i<n;i++)
    {
		for(int j=0;j<n;j++)
				cout<<board[i][j];
		cout<<endl;
    }


}