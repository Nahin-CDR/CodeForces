//Solver : Nahin  the  Coder
//Date   : 14 - 07 - 2021
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int three = 0;
	int five = 0;
	int seven = 0;
	
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		
		if(n%3 == 0)
		{
			cout<<n/3<<" "<<0<<" "<<0<<"\n";
		}
		else if(n%5 == 0)
		{
			cout<<0<<" "<<n/5<<" "<<0<<"\n";
		}
		else if(n%7 == 0)
		{
			cout<<0<<" "<<0<<" "<<n/7<<"\n";
		}
		else
		{
			int res1 = n-3;
			if(res1%5 == 0 and res1>0)
			{
				cout<<1<<" "<<res1/5<<" "<<0<<"\n";
				continue;
			}
			if(res1%7 == 0 and res1>0)
			{
				cout<<1<<" "<<0<<" "<<res1/7<<endl;
				continue;
			}
			
			
			
			int res2 = n-5;
			if(res2%3 == 0 and res2>0)
			{
				cout<<res2/3<<" "<<1<<" "<<0<<"\n";
				continue;
			}
			if(res2%7 == 0 and res2>0)
			{
				cout<<0<<" "<<1<<" "<<res2/7<<"\n";
				continue;
			}
			
			int res3 = n-7;
			if(res3%3 == 0 and res3>0)
			{
				cout<<res3/3<<" "<<0<<" "<<1<<"\n";
				continue;
			}
			if(res3%5 == 0 and res3>0)
			{
				cout<<0<<" "<<res3/5<<" "<<1<<"\n";
				continue;
			}
			cout<<-1<<"\n";
		}
	}
	
	
	
	
	
	return 0;
}
