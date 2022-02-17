//Author : Nahin the Coder
//Date : 17-02-2022


#include<bits/stdc++.h>
using  namespace std;

int main()
{
	int test; cin>>test;
	while(test--)
	{
		int x,y;
		cin>>x>>y;
		if(x == 0 and y == 0)
		{
			cout<<"0 0"<<endl;
		}
		else if(x == 0 and y != 0)
		{
			if(y%2 == 0)
			{
				cout<<0<<" "<<y/2<<endl;
			}
			else
			{
				cout<<"-1 -1"<<endl;
			}
		}
		else if(x != 0 and y == 0)
		{
			if(x%2 == 0)
			{
				cout<<x/2<<" "<<0<<endl;
			}
			else
			{
				cout<<"-1 -1"<<endl;
			}
		}
		else
		{
			int S = (x+y)/2;
			if(x>=y)
			{
				int mx = x-(S-1);
				int mn = y-1;

				if(mx+mn == S)
				{
					cout<<S-1<<" "<<1<<endl;
				}
				else
				{
					cout<<"-1 -1"<<endl;
				}

			}
			else
			{
				int mx = y-(S-1);
				int mn = x-1;

				if(mx+mn == S)
				{
					cout<<1<<" "<<S-1<<endl;
				}
				else
				{
					cout<<"-1 -1"<<endl;
				}

			}
			

		}
	}


	return 0;
}
