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
		ll a,b;
		cin>>a>>b;
		if(a==1 and b==a)
	    {
			cout<<"NO"<<endl;
		}
		else if(b==1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		    ll z = a*b;
		    ll x = a;
		    ll y = z-x;
		    if(x==y)
		    {
		    	ll res = z*2;
		    	cout<<x<<" "<<res-x<<" "<<res<<endl;
			}
			else if(y==0)
			{
				cout<<2<<" "<<x-2<<" "<<x<<endl;
			}
			else
			{
				cout<<x<<" "<<y<<" "<<z<<endl;
			}
		}
	}
	
	
	
	return 0;
}
