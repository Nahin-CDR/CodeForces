//Solver : Nahin the Coder
//Date : 14 - 06 - 2021

#include<bits/stdc++.h>
using namespace std;

vector<int>vc(1000001);



int main()
{
	int n,m;
	cin>>n>>m;
    
    while(m--)
    {
    	int a,b,c;
    	cin>>a>>b>>c;
    	
    	//Check for A
    	
    	if(vc[a] == 0)
    	{
    		if(vc[b] == 0 and vc[c] == 0)
    		{
    			vc[a] = 1;
    			vc[b] = 2;
    			vc[c] = 3;
			}
			else if(vc[b] == 0 and vc[c] == 1)
			{
				vc[a] = 2;
				vc[b] = 3;
			}
			else if(vc[b] == 0 and vc[c] == 2)
			{
				vc[a] = 1;
				vc[b] = 3;
			}
			else if(vc[b] == 0 and vc[c] == 3)
			{
				vc[a] = 1;
				vc[b] = 2;
			}
			
			else if(vc[b] == 1 and vc[c] == 0)
			{
				vc[a] = 2;
				vc[c] = 3;
			}
			else if(vc[b] == 2 and vc[c] == 0)
			{
				vc[a] = 1;
				vc[c] = 3;
			}
			else if(vc[b] == 3 and vc[c] == 0)
			{
				vc[a] = 1;
				vc[c] = 2;
			}
			else if(vc[b] == 2 and vc[c] == 3)
			{
				vc[a] = 1;
			}
			else if(vc[b] == 3 and vc[c] == 2)
			{
				vc[a] = 1;
			}
			else if(vc[b] == 1 and vc[c] == 2)
			{
				vc[a] = 3;
			}
			else if(vc[b] == 2 and vc[c] == 1)
			{
				vc[a] = 3;
			}
			else if(vc[b] == 3 and vc[c] == 1)
			{
				vc[a] = 2;
			}
			else if(vc[b] == 1 and vc[c] == 3)
			{
				vc[a] = 2;
			}
		}
		
		
		
		//check for B
		
		if(vc[b] == 0)
    	{
    		if(vc[a] == 0 and vc[c] == 0)
    		{
    			vc[a] = 1;
    			vc[b] = 2;
    			vc[c] = 3;
			}
			else if(vc[a] == 0 and vc[c] == 1)
			{
				vc[a] = 2;
				vc[b] = 3;
			}
			else if(vc[a] == 0 and vc[c] == 2)
			{
				vc[a] = 1;
				vc[b] = 3;
			}
			else if(vc[a] == 0 and vc[c] == 3)
			{
				vc[a] = 1;
				vc[b] = 2;
			}
			
			else if(vc[a] == 1 and vc[c] == 0)
			{
				vc[b] = 2;
				vc[c] = 3;
			}
			else if(vc[a] == 2 and vc[c] == 0)
			{
				vc[b] = 1;
				vc[c] = 3;
			}
			else if(vc[a] == 3 and vc[c] == 0)
			{
				vc[b] = 1;
				vc[c] = 2;
			}
			else if(vc[a] == 2 and vc[c] == 3)
			{
				vc[b] = 1;
			}
			else if(vc[a] == 3 and vc[c] == 2)
			{
				vc[b] = 1;
			}
			else if(vc[a] == 1 and vc[c] == 2)
			{
				vc[b] = 3;
			}
			else if(vc[a] == 2 and vc[c] == 1)
			{
				vc[b] = 3;
			}
			else if(vc[a] == 3 and vc[c] == 1)
			{
				vc[b] = 2;
			}
			else if(vc[a] == 1 and vc[c] == 3)
			{
				vc[b] = 2;
			}
		}
		
		
		
		//Check for C
		if(vc[c] == 0)
    	{
    		if(vc[b] == 0 and vc[a] == 0)
    		{
    			vc[a] = 1;
    			vc[b] = 2;
    			vc[c] = 3;
			}
			else if(vc[b] == 0 and vc[a] == 1)
			{
				vc[c] = 2;
				vc[b] = 3;
			}
			else if(vc[b] == 0 and vc[a] == 2)
			{
				vc[c] = 1;
				vc[b] = 3;
			}
			else if(vc[b] == 0 and vc[a] == 3)
			{
				vc[c] = 1;
				vc[b] = 2;
			}
			
			else if(vc[b] == 1 and vc[a] == 0)
			{
				vc[a] = 2;
				vc[c] = 3;
			}
			else if(vc[b] == 2 and vc[a] == 0)
			{
				vc[a] = 1;
				vc[c] = 3;
			}
			else if(vc[b] == 3 and vc[a] == 0)
			{
				vc[a] = 1;
				vc[c] = 2;
			}
			else if(vc[b] == 2 and vc[a] == 3)
			{
				vc[c] = 1;
			}
			else if(vc[b] == 3 and vc[a] == 2)
			{
				vc[c] = 1;
			}
			else if(vc[b] == 1 and vc[a] == 2)
			{
				vc[c] = 3;
			}
			else if(vc[b] == 2 and vc[a] == 1)
			{
				vc[c] = 3;
			}
			else if(vc[b] == 3 and vc[a] == 1)
			{
				vc[c] = 2;
			}
			else if(vc[b] == 1 and vc[a] == 3)
			{
				vc[c] = 2;
			}
		}
	}
	
	for(int i=1; i<=n; i++)
	{
		cout<<vc[i]<<" ";
	}
	
	
	
	return 0;
}
