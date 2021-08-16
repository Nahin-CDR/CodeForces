//Solver : Nahin the Coder
//Date   : 15 - 08 - 2021
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
		for(int i=0; i<n; i++)
		{
			char ch;
			bool checker = false;
			int index = 0;
			int counter = 1;
			if(str[i] == '?')
			{
				for(int j=i+1; j<n; j++)
				{
					if(str[j] != '?')
					{
						index = j;
						ch = str[j];
						counter++;
						break;
					}
					counter++;
				}
			}
			else
			{
				continue;
			}
			
			
			
			if(index != 0)
			{
				if(ch == 'R')
				{
					if(counter%2==0)
					{
						str[i] = 'B';
					}
					else
					{
						str[i] = 'R';
					}
				}
				if(ch == 'B')
				{
					if(counter%2 == 0)
					{
						str[i] = 'R';
					}
					else
					{
						str[i] = 'B';
					}
				}
			}
			else
			{
				if(i==0)
				{
					str[i] = 'B';
				}
				else
				{
					if(str[i-1] == 'R')
					{
						str[i] = 'B';
					}
					else if(str[i-1] == 'B')
					{
						str[i] = 'R';
					}
				}
			}
		}
		cout<<str<<"\n";
	}
	
	return 0;
}
