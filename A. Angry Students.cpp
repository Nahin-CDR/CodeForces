#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 13-04-2021


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
		char arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		
		int res = 0;
		
		for(int i=0; i<n; i++)
		{
			int counter = 0;
			
			if(arr[i]=='A')
			{
				for(int j = i+1; j<n; j++)
				{
					if(arr[j] != 'P')
					{
						break;
					}
					else
					{
						counter++;
					}
				}
			}
			res = max(res,counter);
		}
		
		cout<<res<<endl;
		
		
	}
	
	return 0;
}
