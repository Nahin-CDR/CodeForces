//Nahin the coder
//Date : 21-05-2021


#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int len,k;
	cin>>len>>k;
	
	int arr[len];
	for(int i=0; i<len; i++)
	{
		cin>>arr[i];
	}
	
	
	for(int i=0; i<len; i++)
	{
		if(arr[i]<0 and k>0)
		{
			arr[i] = abs(arr[i]);
			k--;
		}
	}
	
	sort(arr,arr+len);
	
	while(k--)
	{
		arr[0] = -arr[0];
	}
	
	int sum = 0;
	
	for(int i=0; i<len; i++)
	{
		sum = sum + arr[i];
	}
	
	cout<<sum<<endl;
	
	
	
	
	
	
	
	
	return 0;
}
