#include<bits/stdc++.h>
using namespace std;

// Solver : Nahin the Coder
// Date  : 03 - 02 - 2021

int main()
{
    
    int n,m;
    
	cin>>n>>m;
	
	int arr[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	sort(arr,arr+n);
	
	int res = 0;
	
	for(int i=0; i<m; i++)
	{
		if(arr[i]>0)
		{
			break;
		}
		res = res + arr[i];
	}
	
	cout<<-res;
	
	
	
	
	return 0;
	
}
