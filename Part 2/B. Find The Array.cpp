//Solver : Nahin the Coder
//Date : 04-09-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll arr[100];


ll Check(ll n,ll len)
{
	ll mini = 9999999999;
	ll store;
	for(ll i=0; i<len; i++)
	{
		ll res = abs(n-arr[i]);
		if(res<mini)
		{
			mini = res;
			store = arr[i];
		}
	}
	return store;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
    ll test;cin>>test;
	while(test--)
	{
	    ll n;
		cin>>n;
	
		
		
		
	    ll odd = 0;
	    ll even = 0;
	    
		for(ll i=0; i<n; i++)
		{
			cin>>arr[i];
			if( (i+1)%2 != 0)
			{
				odd = odd+arr[i];
			}
			else
			{
				even = even + arr[i];
			}
		}
		
		if(odd>=even)
		{
			for(int i=0; i<n; i++)
			{
				if( (i+1)%2 != 0)
				{
					ll res = Check(arr[i],n);
					cout<<res<<" ";
				}
				else
				{
					cout<<1<<" ";
				}
			}
			cout<<"\n";
		}
		else
		{
			for(int i=0; i<n; i++)
			{
				if( (i+1)%2 == 0)
				{
					ll res = Check(arr[i],n);
					cout<<res<<" ";
				}
				else
				{
					cout<<1<<" ";
				}
			}
			cout<<"\n";
		}
	}	
	
	
	
	return 0;
}
