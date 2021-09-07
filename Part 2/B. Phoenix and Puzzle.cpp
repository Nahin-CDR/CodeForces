//Nahin the coder
//date : 07-09-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	set<ll>myset;
	for(ll i=1; i<=40000; i++)
	{
		myset.insert(i*i*2);
		myset.insert(i*i*4);
	}
	
	ll test;
	cin>>test;
	while(test--)
	{
		ll n;cin>>n;
		if(myset.find(n) != myset.end())
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
