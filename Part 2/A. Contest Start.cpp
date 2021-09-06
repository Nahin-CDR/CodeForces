//Solver : Nahin the Coder
//Date : 06-08-2021
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
    	ll n,x,t;
    	cin>>n>>x>>t;
    	ll p = min(t/x,n);
    	cout<<p*(p-1)/2+(n-p)*p<<endl;		
	}
	
	return 0;
}
