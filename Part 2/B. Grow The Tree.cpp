//Solver : Nahin the coder
//Date : 21 - 08 - 2021


#include<bits/stdc++.h>
#define MAX 100000
#define ll long long

using namespace std;

int arr[MAX];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll len;
	cin>>len;
	
	for(ll i=0; i<len; i++)
	{
		cin>>arr[i];
	}
	
	sort(arr,arr+len);
	ll xAxis = 0;
	ll yAxis = 0;
    
    if(len%2 !=0)
    {
    	int x = len-1;
    	int y = 0;
    	int back_limit = (len/2)+1 ;
    	for(int i = 1; i <= back_limit; i++)
    	{
    		xAxis = xAxis + arr[x--];
    		if(i<back_limit)
    		{
    			yAxis = yAxis + arr[y++];
			}
		}
		cout<<(xAxis*xAxis)+(yAxis*yAxis)<<"\n"; 
	}
	else
	{
		ll x = len-1;
		ll y = 0;
		for(int i=1; i<=len/2; i++)
		{
			xAxis = xAxis + arr[x--];
			yAxis = yAxis + arr[y++];
		}
		cout<<(xAxis*xAxis)+(yAxis*yAxis)<<"\n"; 
	}
	return 0;
}
