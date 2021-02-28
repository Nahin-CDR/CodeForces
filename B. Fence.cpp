#include<bits/stdc++.h>
using namespace std;
 
//Solver : Nahin the Coder
//Date   : 26-02-2021
int len,limit;
 

 
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin)
	#endif
 
    cin>>len>>limit;   
    
    int arr[len];
    for(int i=0; i<len; i++)
    {
    	cin>>arr[i];
	}
	
	if(len==1)
	{
		cout<<1<<"\n";
		return 0;
	}
	if(len==2 and limit==1)
	{
		if(arr[0]<arr[1])
		{
			cout<<1<<endl;
			return 0;
		}
		if(arr[0]>arr[1])
		{
			cout<<2<<endl;
			return 0;
		}
		else
		{
			cout<<1<<endl;
			return 0;
		}
	}
	
	
	
	if(len==3 and limit==1)
	{
		if(arr[0]<arr[1] and arr[0]<arr[2])
		{
			cout<<1<<endl;
			return 0;
		}
		if(arr[1]<arr[0] and arr[1]<arr[2])
		{
			cout<<2<<endl;
			return 0;
		}
		if(arr[2]<arr[0] and arr[2]<arr[1])
		{
			cout<<3<<endl;
			return 0;
		}
		if(arr[0]==arr[1] and arr[1]==arr[2])
		{
			cout<<1<<endl;
			return 0;
		}
	}
	
	
	
	
	if(len==3 and limit==2)
	{
		if(arr[0]<arr[2] and arr[1]<arr[2])
		{
			cout<<1<<endl;
			return 0;
		}
		if(arr[1]<arr[0] and arr[2]<arr[0])
		{
			cout<<2<<endl;
			return 0;
		}
		if(arr[2]==arr[0] and arr[2]==arr[1])
		{
			cout<<1<<endl;
			return 0;
		}
	}
	
	if(len==3 and limit==3)
	{
		cout<<1<<endl;
		return 0;
	}
	
	int sum = 0;
	for(int i=0; i<limit; i++)
	{
		sum = sum+arr[i];
	}
	
	
    
	
	int ans = sum;
	int minSum = sum;
	int cnt = 0;
	int index = 1;
	for(int i=limit; i<len; i++)
	{
		ans = ans + arr[i] - arr[cnt];
		if(ans<minSum)
		{
			minSum = ans;
			index = cnt+2;	
		}
		cnt++;
	}
	
	cout<<index<<endl;
		
	return 0;
}
