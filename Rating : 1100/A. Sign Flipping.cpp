//Author : Nahin the Coder
//Date : 24-01-2022

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test; cin>>test;
	while(test--)
	{
		int n; cin>>n;
		int limit = n/2;
		int arr[n];
		int pos = 0;
		int neg = 0;
		for(int i = 0; i < n; i++)
		{
			cin>>arr[i];
            if(i!=0)
			{
				if(arr[i]-arr[i-1]==0)
				{
					pos++;
					neg++;
				}
				else if (arr[i]-arr[i-1]>0)
				{
					pos++;
				}
				else
				{
					neg++;
				}
			}
		}

		if(pos>=limit and neg>=limit)
		{
			for(int i = 0; i < n; i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		else
		{
			for(int i = 0; i < n; i++)
			{
				if((i+1)%2 != 0)
				{
					cout<<((arr[i]>=0)?(-1)*arr[i]:arr[i])<<" ";
				}
				else
				{
					cout<<((arr[i]<=0)?(-1)*arr[i]:arr[i])<<" ";
				}
			}
			cout<<"\n";
		}


	}
	return 0;
}
