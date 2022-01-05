//Author : Nahin the Coder
//Date : 05-01-2022

#include<bits/stdc++.h>
using namespace std;






int main()
{
	//ios::sync_with_stdio(false);
	//cin.tie(0);
	
	int test;
	cin>>test;
	while(test--)
	{
		int n,k;
		cin>>n>>k;
		if(n==1 and k==1)
		{
			cout<<"R"<<endl;
		}
		else
		{
			int t;
			if(n%2 == 0)
			{
				t = n/2;
			}
			if(n%2 != 0)
			{
				t = n/2+1;
			}
             
			int count = k;
			if(t<k)
			{
				cout<<-1<<endl;
			}
			else
			{
				for(int i =1; i<=n; i++)
				{
					for(int j=1; j<=n; j++)
					{
						if(i==j)
						{
							if(i%2!=0 and j%2!=0)
						    {
							    if(count > 0)
								{
									cout<<"R";
									count--;
								}
								else
								{
									cout<<".";
								}
						    }
							else
							{
								cout<<".";
							}
						}
						else
						{
							cout<<".";
						}
					}
					cout<<"\n";
				}
			}
		}
	}
	
	return 0;
}

