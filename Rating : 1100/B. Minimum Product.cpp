//Author : Nahin the Coder
//Date : 18-01-2022

#include<bits/stdc++.h>
using namespace std;
using ll = long long;


ll Calculation1(ll a,ll b,ll x,ll y,ll n)
{
	ll p = a-x;
	ll q = b-y;
	ll res;
         
	p = p-n;
	if(p>=0)
	{
		a = x+p;
	}
	else
	{
		a = x;
		n = p*(-1);
		q = q-n;
		if(q>=0)
		{
			b = y+q;
		}
		else
		{
			b = y;
		}
		
	}
    res = a*b;
	return res;

}

ll Calculation2(ll a,ll b,ll x,ll y,ll n)
{
	ll p = a-x;
	ll q = b-y;
	ll res;
         
	q = q-n;
	if(q>=0)
	{
		b = y+q;
	}
	else
	{
		b = y;
		n = q*(-1);
		p = p-n;
		if(p>=0)
		{
			a = x+p;
		}
		else
		{
			a = x;
		}
		
	}
	res = a*b;
	return res;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll test; cin>>test;
	while(test--)
	{
		ll a,b,x,y,n;
		cin>>a>>b>>x>>y>>n;

        //First Portions
		ll res1 = Calculation1(a,b,x,y,n);
		//Second Portions
        ll res2 = Calculation2(a,b,x,y,n);
        cout<<min(res1,res2)<<endl;
	}


	return 0;
}

