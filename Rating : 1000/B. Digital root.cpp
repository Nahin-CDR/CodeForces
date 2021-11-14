//Author : Nahin the coder
//Date  : 13 -11- 2021 

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
    ll n;
	cin>>n;
	for(ll i = 0; i < n; i++)
	{
		ll k,x;
		cin>>k>>x;
		cout<<9*(k-1)+x<<endl;
	}
	return 0;
}
