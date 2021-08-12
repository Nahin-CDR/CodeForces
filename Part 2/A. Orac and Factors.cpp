//Solver: Nahin the Coder
//Date : 12 - 08 - 2021

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	ll test;
	cin>>test;
	
	while(test--)
	{
		ll n,k;
		cin>>n>>k;
		ll sum;
		if(k==1)
		{
			if(n%2 != 0)
			{
				ll i = 3;
				while(true)
				{
					if(n%i == 0)
					{
						break;
					}
					i = i + 2;
				}
				sum = n + i + (k-1)*2;
				cout<<sum<<endl;
			}
			else
			{
				cout<<n+2<<endl;
			}
		}
		else
		{
			if(n%2 != 0)
			{
				ll i = 3;
				while(true)
				{
					if(n%i == 0)
					{
						break;
					}
					i = i + 2;
				}
				sum = n + i + (k-1)*2;
				cout<<sum<<endl;
			}
			else
			{
				sum = n + k*2;
				cout<<sum<<endl;
			}
		}
	}
	return 0;
}
