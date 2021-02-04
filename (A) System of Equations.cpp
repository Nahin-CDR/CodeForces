#include<bits/stdc++.h>
using namespace std;
 
// Solver : Nahin the Coder
// Date  : 04 - 02 - 2021
 
 
int main()
{
    int n,m;
 
    int counter = 0;
    int res1,res2;
    
    cin>>n>>m;
    
	int limit = n+m;
	
	for(int i=0; i<limit; i++)
	{
	    for(int j=0; j<limit; j++)
		{
		      	res1 = pow(i,2) + j;
		      	res2 = pow(j,2) + i;
		      	if(res1==n and res2 == m)
		        {
		      	    counter++; 	
				}
		}	
	}    
    
    cout<<counter;
    
    
	return 0;
	
}
