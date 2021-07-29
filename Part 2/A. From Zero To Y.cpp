//Solver : Nahin the Coder
//Date   : 29 - 07 - 2021
#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    
	int test;
	cin>>test;
	while(test--)
	{
		ll x,y,w;
		cin>>x>>y;
		w = y / x;
        ll ans = y % x;
        while (w > 0) 
		{
            ans += w % 10;
            w /= 10;
        }
        cout<<ans<<"\n";
	
	}
	
	
	
	
	
	
	return 0;
}
