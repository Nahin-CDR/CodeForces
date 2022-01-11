//Author : Nahin the Coder
//Date : 11-01-2022

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
    ll test; cin>>test;
	while(test--)
	{
		ll n,k;
		cin>>n>>k;
		ll arr[n];
		for(ll i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		if(n==1)
		{
			cout<<-1<<endl;
			continue;
		}
		
		ll index = 0;
        ll res;
         

		for(ll i=1; i<=k; i++)
		{
			index = -2;
			for(int j=0; j<n-1; j++)
			{
				if(arr[j]<arr[j+1])
				{
					++arr[j];
					index = j;
					break;
				}
			}
            res = index+1;
			if(index == -2)
			{
				break;
			}
		}
		
		cout<<res<<endl;
		
	}


	return 0;
}
