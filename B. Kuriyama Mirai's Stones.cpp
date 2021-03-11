#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 11-03-2021

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
	long long n;
	cin>>n;
	
	long long arr[n+1] = {} ;
	long long arr2[n+1] = {};
	
	
	for(long long i=1; i<=n; i++)
	{
		cin>>arr[i];
		arr2[i] = arr[i];
	}
	
	sort(arr2,arr2+n+1);
	
	
	
	for(long long i=1; i<=n; i++)
	{
		arr[i] = arr[i] + arr[i-1];
		arr2[i] = arr2[i] + arr2[i-1];
	}
	
	
	long long m;
	cin>>m;
	
	while(m--)
	{
		long long type,l,r;
		
		cin>>type>>l>>r;
		
		if(type==1)
		{
			cout<<arr[r]-arr[l-1]<<endl;
		}
		else
		{
			cout<<arr2[r]-arr2[l-1]<<endl;
		}
	}
	
	
	
	
	return 0;
}
