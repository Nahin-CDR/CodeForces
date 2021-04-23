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
	
    int n,k;
    cin>>n>>k;
    
    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<n; j++)
    	{
    		if(i==j)
    		{
    			cout<<k<<" ";
			}
			else
			{
				cout<<0<<" ";
			}
		}
		cout<<endl;
	}
    
    
    
	return 0;
}            
