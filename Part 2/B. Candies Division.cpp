//Solver : Nahin the Coder
//Date   : 15 - 08 - 2021
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	int test;
	cin>>test;
	while(test--)
	{
		int n,k;
		cin>>n>>k;
		cout<<n-max(0,(n%k)-k/2)<<endl;
	}
	
	return 0;
}
