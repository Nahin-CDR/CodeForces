//Solver : Nahin the Coder
//Date   : 22 - 08 - 2021

#include <bits/stdc++.h>
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
    	ll n,m;
    	cin>>n>>m;
    	ll rem1 = n-m;
    	if(rem1%10 == 0)
    	{
    		cout<<"YES"<<endl;
		}
		else if(rem1>1)
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
