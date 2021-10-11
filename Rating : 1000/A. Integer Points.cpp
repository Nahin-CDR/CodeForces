//Solver : Nahin the Coder
//Date : 11-10-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll t;
	cin>>t;
	while(t--)
	{
		ll m; cin>>m;
		ll arr1[m];
		ll odd_1 = 0;
		ll even_1 = 0; 
		for(ll i=0; i<m; i++)
		{
			ll k;cin>>k;
			if(k%2 == 0 )
			{
				even_1++;
			}
			else
			{
				odd_1++;
			}
		}
		ll n; cin>>n;
		
	
        ll counter = 0;
		for(ll i=0; i<n; i++)
		{
			ll k; cin>>k;
			if(k%2 == 0)
			{
				counter = counter + even_1;
			}
			else
			{
				counter = counter + odd_1;
			}
		}

        cout<<counter<<endl;
	}
    return 0;
}
