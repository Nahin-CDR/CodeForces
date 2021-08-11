// solved by taking help from editorial 
// Date : 11 - 08 - 2021
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll test; cin>>test;
	while(test--)
    {
    	ll n;
    	cin>>n;
    	ll count_2 = 0;
    	ll count_3 = 0;
    	while(n%2 == 0)
    	{
    		n = n/2;
    		count_2++;
		}
		while(n%3 == 0)
		{
			n = n/3;
			count_3++;
		}
		if(n == 1 and count_3 >= count_2)
		{
			cout<<2*count_3 - count_2<<"\n";
		}
		else
		{
			cout<<-1<<endl;
		}
    }
    
    return 0;
}
