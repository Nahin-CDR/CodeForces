//Solver : Nahin the coder
//Date : 11-09-2021
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
		ll n,k;
		cin>>n>>k;
		if(n==k)
		{
			cout<<1<<endl;
		}
		else if(n<k)
		{
			cout<<(n+k-1)/n<<endl;
		}
		else
		{
			if(n%k == 0)
			{
				cout<<1<<endl;
			}
			else
			{
				cout<<2<<endl;
			}
		}
	}
	
	
	
	
	
	
	
	return 0;
}
