//Date : 28-01-2021

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double m,a;
    int n;
    cin>>n;
    cin>>m;
    
    double max = 0;
    int index = 0;
    for(int i=1; i<=n; i++)
    {
    	cin>>a;
    	if(ceil(a/m)>=max)
    	{
    		index = i;
    		max = ceil(a/m);
		}
	}
	cout<<index;
 
    
  
	
	
	
    
    return 0;
 
}
