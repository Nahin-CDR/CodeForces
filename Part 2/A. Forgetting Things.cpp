//Solver : Nahin the coder
//Date : 22 - 08 - 2021


#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int test = 1;
	while(test--)
	{
		ll x,y;
		cin>>x>>y;
		if(x>y)
		{
			if(x==9 and y ==1)
			{
				cout<<9<<" "<<10<<endl;
			}
			else
			{
			    cout<<-1<<endl;	
			}
		}
		else if(y-x>1)
		{
			cout<<-1<<endl;
		}
		else if(x+1==y)
		{
			cout<<x<<" "<<y<<endl;
		}
		else if(x==y)
		{
			cout<<x<<0<<" "<<y<<1<<endl;
		}
	}
	
	
	
	return 0;
}
