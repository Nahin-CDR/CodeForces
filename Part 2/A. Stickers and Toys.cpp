//Solver : Nahin the Coder
//Date : 31-08-2021
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
		ll egg,s,t;
		cin>>egg>>s>>t;
		if(egg==s and s==t)
		{
			cout<<"1"<<endl;
		}
		else if(s==t and s+t==egg)
		{
			cout<<s+1<<endl;
		}
		else if(s+t==egg and s>t)
		{
			cout<<s+1<<endl;
		}
		else if(s+t==egg and t>s)
		{
			cout<<t+1<<endl;
		}
		else
		{
		    if(s>t)
		    {
		    	egg = egg-t;
			}
			if(t>s)
			{
				egg = egg-s;
			}
			if(t==s)
			{
				egg = egg-s;
			}
			cout<<egg+1<<endl;
		}
	}
	
	
	
	return 0;
}
