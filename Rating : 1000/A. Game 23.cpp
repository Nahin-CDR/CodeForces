//Author : Nahin the Coder
//Date : 06-11-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll n,m;
	cin>>n>>m;
	if(n == m)
	{
		cout<<"0"<<endl;
	}
	else if(n*2 > m or n>m)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		if(m%n == 0)
		{
			if(m%2 !=0 and m%3 != 0)
			{
				cout<<"-1"<<endl;
				return 0;
			}
			ll track;
			ll cnt = 0;
			bool turn = true;
			while(turn)
			{
				ll temp1 = m/2;
               
				if(m%2 == 0 and temp1%n == 0)
				{
					m = temp1;
					cnt++;
				}

				ll temp2 = m/3;
				
				if(m%3 == 0 and temp2%n == 0)
				{
					m = temp2;
					cnt++;
				}
                
				if(n == m)
				{
					cout<<cnt<<endl;
					return 0;
				}


                if(m%2 !=0 and m%3 != 0 )
				{
					cout<<"-1"<<endl;
					return 0;
				}
				if(temp1 != n and temp2 != n)
				{
					if(temp1%n !=0 and temp2%n !=0)
					{
						cout<<"-1"<<endl;
						return 0;
					}
				}
			
				
				
			}
			
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}

	return 0;
}
