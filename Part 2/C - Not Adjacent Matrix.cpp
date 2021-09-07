//Solver : Nahin the Coder
//Date : 07-09-2021
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll test;
	cin>>test;
	while(test--)
	{
		
	
	ll n;
	cin>>n;
	if(n==1)
	{
		cout<<1<<endl;
	}
	else if(n==2)
	{
		cout<<-1<<endl;
	}
	else
	{
		ll res = n*n;
		ll counter = 1;
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=n; j++)
			{
				cout<<counter<<" ";
				counter = counter+2;
				if(counter>res)
				{
					counter = 2;
				}
			}
			cout<<endl;
		}
	}
	
	
}
	return 0;
}
