//Solver : Nahin the Coder
//Date   : 14-07-2021

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
		int arr[n];
		int counter = 0;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			counter += arr[i];
		}
		
		if(counter==0)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
			sort(arr,arr+n);
			
			if(n==2)
			{
				if(arr[0] == 0)
				{
					cout<<arr[1]<<" "<<arr[0]<<"\n";
				}
				else
				{
					cout<<arr[0]<<" "<<arr[1]<<"\n";
				}
			}
			else
			{
				bool zero = false;
				if(counter>0)
				{
					for(int i=n-1; i>=0; i--)
			        {
			            cout<<arr[i]<<" ";
			        }
				}
				else
				{
					for(int i=0; i<n; i++)
			        {
			            cout<<arr[i]<<" ";
			        }
				}
			    cout<<"\n";
			}
			
		}
	}

	
	
	return 0;
}
