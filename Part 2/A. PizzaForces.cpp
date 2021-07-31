//Solver : Nahin the Coder
//Date   : 01 - 08 - 2021
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
		cin>>n;
		if(n<=6)
		{
			cout<<15<<endl;
		}
		else if(n>6 and n<=8)
		{
			cout<<20<<endl;
		}
		else if(n>8 and n<=10)
		{
			cout<<25<<endl;
		}
		else
		{
			ll res1 = n/10;
			ll res2 = n%10;
			if(n%6==0)
			{
				cout<<(n/6)*15<<endl;
				continue;
			}
			if(n%8==0)
			{
				cout<<(n/8)*20<<endl;
				continue;
			}
			if(n%10 == 0)
			{
				cout<<(n/10)*25<<endl;
				continue;
			}
			if(res2 == 0)
			{
				cout<<res1*25<<endl;
			}
			else
			{
				if(res2 <= 2)
				{
					cout<<(res1-1)*25+30<<endl;
				}
				else if(res2 == 5)
				{
					cout<<(res1-1)*25+40<<endl;
				}
				else if(res2<6)
				{
					cout<<(res1-1)*25+15+20<<endl;
				}
				else if(res2 <= 6 )
				{
					cout<<(res1-1)*25+40<<endl;
				}
				else if(res2 <= 8)
				{
					cout<<(res1-1)*25+25+20<<endl;
				}
			    else 
			    {
			    	cout<<(res1*25)+25<<endl;
				}
			}
		}

	}
	
	
	
	
	return 0;
}
