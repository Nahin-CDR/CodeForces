#include<bits/stdc++.h>
using namespace std;
 
// Solver : Nahin the Coder
// Date   : 07-02-2021
 
 
int main()
{
    int n,m;
    cin>>n>>m;
    
    char arr[n][m];
    char ar[n][m];
    
    
    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<m; j++)
    	{
    		cin>>arr[i][j];
    		ar[i][j] = arr[i][j];
		}
	}
	
	for(int i=0; i<n; i++)
    {
    	for(int j=0; j<m; j++)
    	{
    		if(i%2==0)
    		{
    			if(j%2==0)
    			{
    				ar[i][j] = 'B';
				}
				else
				{
					ar[i][j] = 'W';
				}
			}
			else
			{
				if(j%2==0)
    			{
    				ar[i][j] = 'W';
				}
				else
				{
					ar[i][j] = 'B';
				}
			}
		}
	}
	
	
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(arr[i][j]=='-')
			{
				ar[i][j] = '-';
			}
		}
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<ar[i][j];
		}
		cout<<"\n";
	}
	
	
	
	
	
	
	
	
    
	return 0;
}
