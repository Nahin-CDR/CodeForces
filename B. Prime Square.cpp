//Solver : Nahin the Coder
//Date   : 18 - 07 - 2021

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int p)
{
	bool prime = true;
	for(int i=2; i<=p/2; i++)
	{
		if(p%i==0)
		{
			prime = false;
			break;
		}
	}
	return prime;
}

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
    	
    	if(isPrime(n))
    	{
    		for(int i=1; i<=n; i++)
    		{
    			for(int j=1; j<=n; j++)
    			{
    				cout<<1<<" ";
				}
				cout<<"\n";
			}
		}
		else
		{
			if(n<=8)
			{
				for(int i=1; i<=n; i++)
    		    {
    			    for(int j=1; j<=n; j++)
    			    {
    				    if(i==j)
    				    {
    					    cout<<0<<" ";
					    }
					    else
					    {
						    cout<<1<<" ";
					    }
				    }
				    cout<<"\n";
			    }
			}
			else
			{
				int difference = n-7;
				for(int i=1; i<=n; i++)
				{
					bool flag = true;
					int counter = difference;
					int counter2 = 0;
					if(counter+i-1 > n)
					{
						counter2 = counter+i-1 - n;
					}
					for(int j=1; j<=n; j++)
					{
						if(counter2>0)
						{
							cout<<0<<" ";
							counter2--;
						}
						else if(j>=i and counter>0)
						{
							cout<<0<<" ";
							counter--;
						}
						else
						{
							cout<<1<<" ";
						}
					}
					cout<<"\n";
				}
			}
		}
	}
	
	return 0;
}
