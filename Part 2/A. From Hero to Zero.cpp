//Solver : Nahin the Coder
//Date : 01- 09 - 2021
#include<bits/stdc++.h>
using namespace std;
using ll = long long;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll test;cin>>test;
	while(test--)
	{
		ll counter = 0;
		ll n,k;
		cin>>n>>k;
		while(n>0)
		{
			if(n%k == 0)
			{
				n = n/k;
				counter++;
			}
			else
			{
				ll extra = n%k;
				n = n - extra;
				counter = counter+extra;
			}
		}
		cout<<counter<<endl;
	}
	return 0;
}
