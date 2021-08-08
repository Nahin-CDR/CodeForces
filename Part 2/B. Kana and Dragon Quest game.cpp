// Solver : Nahin the Coder
// Date : 08 - 08 - 2021

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
    	ll x,n,m;
    	cin>>x>>n>>m;
    	ll temp = x;
    	ll temp_M = m;
    	bool flag = false;
    	while(n--)
    	{
    		x = x/2 + 10;
    		if(temp_M>0)
    		{
    			temp = temp - 10;
    			temp_M--;
			}
			if(temp <= 0)
			{
				cout<<"YES"<<endl;
				flag = true;
				break;
			}
		}
		if(flag)
		{
			continue;
		}
		if(x-m*10 <= 0)
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
