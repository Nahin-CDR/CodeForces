//Solver : Nahin CDR
//Date : 24 - 07 - 2021
#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	
	ll test;
	cin>>test;
	while(test--)
	{
		ll len;
		cin>>len;
		ll arr[len];
		for(ll i = 0; i<len; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+len);
		ll ans = 0;
		for(ll i=0; i<len; i++)
		{
			for(ll j=i+1; j<len; j++)
			{
				if(__gcd(arr[i],2*arr[j])>1 or __gcd(2*arr[i],arr[j])>1)
				{
					ans++;
				}
			}
		}
		cout<<ans<<endl;
	}
	
	return 0;
}
