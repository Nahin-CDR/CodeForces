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
		if(n==1)
		{
			cout<<-1<<endl;
		}
		else
		{
			bool flag = false;
			for(int i=0; i<n; i++)
			{
				int x = str[i] - '0';
			    for(int j=0; j<n; j++)
			    {
			    	int y = str[j] - '0';
			    	if(i==j)
			    	{
			    		continue;
					}
					else
					{
						if((x+y)%2==0 and y%2!=0)
						{
							cout<<x<<y<<endl;
							flag = true;
							break;
						}
					}
				}
				if(flag == true)
				{
					break;
				}
			}
			if(flag == false)
			{
				cout<<-1<<endl;
			}
		}
	}
	
	return 0;
}
