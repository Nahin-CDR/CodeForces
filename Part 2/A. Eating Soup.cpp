//Solver : Nahin the Coder
//Date   : 02-09-2021


#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,m;
	cin>>n>>m;
	
	int counter = 1;
	int group = 0;
	if(n==m)
	{
		cout<<0<<endl;
	}
	else if(m==0)
	{
		cout<<1<<endl;
	}
	else
	{
		cout<<min(m,n-m)<<endl;
	}
		
	return 0;
}
