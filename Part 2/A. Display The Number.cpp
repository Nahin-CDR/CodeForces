//Solver : Nahin the Coder
//Date   : 14 - 08 - 2021
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
		ll n;
		cin>>n;
	    
		if(n==3)
		{
			cout<<7<<"\n";
		}
		else if(n%2==0)
		{
			ll k = n/2;
			while(k--)
			{
				cout<<1;
			}
			cout<<"\n";
		}
		else if(n%2 == 1)
		{
			ll k = n/2-1;
			cout<<7;
			while(k--)
			{
				cout<<1;
			}
			cout<<"\n";
		}
	}
	
	
	
	return 0;
}
