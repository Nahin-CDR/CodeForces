//Solver : Nahin the Coder
//Date   : 12 - 08 - 2021
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin>>n;
	long long arr[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	long long temp = 0;
	
	for(int i=0; i<n; i++)
	{
		if(i==0)
		{
			cout<<arr[i]<<" ";
			temp = arr[i];
		}
		else
		{
			if(temp+arr[i]>=temp)
			{
				cout<<temp+arr[i]<<" ";
				temp = temp+arr[i];
			}
			else
			{
				cout<<temp+arr[i]<<" ";
			}
		}
	}
	
	return 0;
}
