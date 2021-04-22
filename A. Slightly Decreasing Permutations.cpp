
//Solver : Nahin the Coder
//Date   : 22-04-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	
	cin>>n>>k;
	
	if(k==0)
	{
		for(int i=1; i<=n; i++)
		{
			cout<<i<<" ";
		}
		return 0;
	}
	
	for(int i=1; i<=k; i++)
	{
		cout<<n--<<" ";
	}
	
	for(int i = 1; i<=n; i++)
	{
		cout<<i<<" ";
	}
	
	
	
	
	return 0;
}
