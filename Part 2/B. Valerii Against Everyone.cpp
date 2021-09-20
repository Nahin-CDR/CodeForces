//Solver : Nahin the Coder
//Date : 20-09-2021
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
		map<int,int>mp;
		for(ll i=1; i<=n; i++)
		{
			ll x;cin>>x;
			++mp[x];
		}
		bool yes = false;
	    for(auto it:mp)
	    {
	    	if(it.second>=2)
	    	{
	    		yes = true;
	    		break;
			}
		}
		if(yes)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}	
	
	
	
	
	return 0;
}
