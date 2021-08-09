//Solver : Nahin the Coder
//Date  : 09 - 08 - 2021


#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll test;
	cin>>test;
	
	while(test--)
	{
		ll n;
		ll tempo,rem;
		cin>>n;
		ll cost = 0;
		while(n>=10)
		{
			rem = n/10;
			tempo = rem*10;
			n = n - tempo;
			cost = cost + tempo;
			n = n + rem;
		}
		cout<<cost+n<<endl;
		
	}
	
	
	return 0;
}
