#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 23 - 04 -2021

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
    int r,c;
    cin>>r>>c;
    
    char arr[r][c];
    
    for(int i=0; i<r; i++)
    {
    	for(int j=0; j<c; j++)
    	{
    		cin>>arr[i][j];
		}
	}
    
    
   
    
    int grandSum = 0;
    
    for(int i=0; i<r; i++)
    {
    	int counter = 0;
    	for(int j=0; j<c; j++)
    	{
    		if(arr[i][j]!='S')
    		{
    			counter++;
			}
		}
		if(counter == c)
		{
			for(int j=0; j<c; j++)
			{
				arr[i][j] = '0';
			}
			grandSum += counter;
		}	 
	}
    
    
    
    //Operation for coloumn
    
    
    
    
    
    
    for(int i=0; i<c; i++)
    {
    	int counter = 0;
    	for(int j=0; j<r; j++)
    	{
    		if(arr[j][i] != 'S')
    		{
    			counter++;
			}
		}
		if(counter == r)
		{
			int cnt = 0;
			for(int j=0; j<r; j++)
    	    {
    		    if(arr[j][i] != '0')
    		    {
    			    cnt++;
			    }
		    }
		    grandSum += cnt;
		}
	}
   
    
    cout<<grandSum<<endl;
    
	return 0;
}            
