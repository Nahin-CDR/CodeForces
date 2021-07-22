//Solver : Nahin the Coder
//Date   : 22 - 07 - 2021

#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	long long test;
	cin>>test;
	
	while(test--)
	{
		long long a,b;
		cin>>a>>b;
		if(a==b)
		{
			cout<<0<<" "<<0<<"\n";
		}
		else if(abs(a-b) == 1)
		{
			cout<<1<<" "<<0<<"\n";
		}
		else
		{
		    long long res = abs(a-b);
		    cout<<res<<" "<<min(a%res,res - a%res)<<"\n";
		}
	}

	return 0;
}
