#include<bits/stdc++.h>
using namespace std;

int solve (int n){
	if(n<=10 || n>21) return 0;
	else if(n==20) return 15;
	else return 4;
}

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin>>n;
	cout<<solve(n)<<endl;

}