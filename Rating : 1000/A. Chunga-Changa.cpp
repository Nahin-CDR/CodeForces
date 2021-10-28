//Author : Nahin the Coder
//Date : 27-10-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
     
	ll x,y,z;
	cin>>x>>y>>z;
	if(x==y and x == 0)
	{
		cout<<0<<" "<<0<<endl;
	}
	else if(x == 0) //  if sasha has no money !
	{
		// we will calculate only for masha
		if(y>=z)
		{
			cout<<y/z<<" "<<0<<endl;
		}
		else
		{
			cout<<0<<" "<<0<<endl;
		}
	}
	else if(y == 0) // if masha has no money
	{
		// we will calculate only for sasha
		if(x>=z)
		{
			cout<<x/z<<" "<<0<<endl;
		}
		else
		{
			cout<<0<<" "<<0<<endl;
		}
	}
	else
	{
		if(z>x or z>y)
		{
			ll res1 = (x+y)/z;
			ll res2 = (x+y)%z;
			if(res2 == 0)
			{
				cout<<res1<<" "<<min(x,y)<<endl;
			}
			else
			{
				ll res3 = min(x,y) - res2;
				cout<<res1<<" ";
				if(res3 < 0)
				{
					cout<<0<<endl;
				}
				else
				{
					cout<<res3<<endl;
				}
			}
		}
		else
		{
			if(x%z == 0 or y%z == 0)
			{
				cout<<(x/z)+(y/z)<<" "<<0<<endl;
			}
			else
			{
				ll res1 = x/z;
				ll res10 = x%z; 

				ll res2 = y/z;
				ll res20 = y%z; 
				if( (res10+res20) % z == 0)
				{
					ll res3 = (res10+res20)/z;
					cout<<res1+res2+res3<<" "<<min(res10,res20)<<endl;
				}
				else
				{
					ll res3 = (res10+res20)/z;
					ll res4 = (res10+res20)%z;
                    ll res5 = min(res10,res20)-res4;
					cout<<res1+res2+res3<<" ";
					if(res5<0)
					{
						cout<<0<<endl;
					}
					else
					{
						cout<<res5<<endl;
					}
				}
			}
		}
	}
    return 0;
}
