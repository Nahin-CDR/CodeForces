#include<bits/stdc++.h>
using namespace std;
 
 
//Solver : Nahin the Coder
//Date   : 29 - 01 - 2021
 
 
int isRepeat(int arr[],int len,int n)
{
	int counter = 0;
	for(int i = 0; i<len; i++)
	{
		if(n==arr[i])
		{
			counter++;
		}
	}
	
	return counter;
}
 
 
 
int main()
{
	
	int test;
	cin>>test;
	
	while(test--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		int max = 0;
		
		for(int i=0; i<n; i++)
		{
			int rept = isRepeat(arr,n,arr[i]);
			if(rept>max)
			{
				max = rept;
			}
		}
		cout<<max<<"\n";
	}
	
	
	
	return 0;
}
