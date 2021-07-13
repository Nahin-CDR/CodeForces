//Solver : Nahin the Coder
//Date   : 13-07-2021

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
    	int arr1[n];
    	for(int i=0; i<n; i++)
    	{
    		cin>>arr1[i];
		}
		
		bool can = false;
		
		for(int i=1; i<n; i++)
		{
			if(arr1[i]>=arr1[i-1])
			{
				can = true;
				break;
			}
		}
		
		if(can)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}	
	}
	
	return 0;
}
