//Solver : Nahin the Coder
//Date   : 07-07-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		string str;
		cin>>str;
		if(n==1)
		{
			stringstream ss(str);
			int x = 0;
			ss>>x;
			if(x%2 == 0)
			{
				cout<<2<<endl;
			}
			else
			{
				cout<<1<<endl;
			}
		}
		else
		{
			int razeOdd = 0;
			int razeEven = 0;
			
			int breachEven = 0;
			int breachOdd = 0;
			
			for(int i=0; i<n; i++)
			{
				int check = str[i] - '0';
				
				
				if((i+1)%2 != 0 and check%2 != 0)
				{
					razeOdd++;
				}
				if((i+1)%2 != 0 and check%2 == 0)
				{
					razeEven++;
				}
				
				
				
				if((i+1)%2 == 0 and check%2 == 0)
				{
					breachEven++;
				}
				if((i+1)%2 == 0 and check%2 != 0)
				{
					breachOdd++;
				}
			}
			
			
			if(n%2 != 0)
			{
				if(razeOdd>0)
				{
					cout<<1<<endl;
				}
				else
				{
					cout<<2<<endl;
				}
			}
			else
			{
				if(breachEven>0)
				{
					cout<<2<<endl;
				}
				else
				{
					cout<<1<<endl;
				}
			}
		}
	}
	
	
	
	
	
	return 0;
}
