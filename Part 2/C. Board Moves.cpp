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
    	ll n;
    	ll counter = 1;
    	ll xy = 8;
    	ll sum = 0;
    	cin>>n;
    	if(n == 1)
    	{
    		cout<<0<<endl;
    		continue;
		}
    	for(ll i = 3; i<=n; i = i+2)
    	{
    		sum = sum + xy*counter;
    		counter++;
    		xy = 8*counter;
		}
		cout<<sum<<endl;
    }
    return 0;
}
