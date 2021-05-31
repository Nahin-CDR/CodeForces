// Nahin the Coder
// Date : 31 - 05 - 2021
// I am the storm that you are experience 


#include<bits/stdc++.h>
using namespace std;



int extra = 1;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int len;
	cin>>len;
	int arr[len];
	for(int i=0; i<len; i++)
	{
		cin>>arr[i];
	}
	
	
	//checking array
	
	int counter = 0;
	
	
	for(int i=0; i<len; i++)
	{
		if(arr[i]==i)
		{
			counter++;
		}
		else if(arr[arr[i]] == i)
		{
			extra = 2;
		}
	}
	
	if(counter==len)
	{
		cout<<counter<<endl;
	}
	else
	{
		cout<<counter+extra<<endl;
	}
	
	
	 return 0;
}
