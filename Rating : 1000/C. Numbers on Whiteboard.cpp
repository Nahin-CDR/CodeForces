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
		ll first,second;
		first = n-1;
		second = n;
		cout<<2<<endl;
		for(ll i=1; i<=n; i++)
		{
		    cout<<second<<" "<<first<<endl;
			second = (first+second+1)/2;
			first--;
	
			if(first==0)
			{
				break;
			}
		}
	}
    
	
	return 0;
} 
