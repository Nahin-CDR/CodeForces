//Solver : Nahin the Coder
//Date   : 06 - 08 - 2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	long long test;
	cin>>test;
	
	
	while(test--)
	{
		long long n,k;
		cin>>n>>k;
		long long len = n*k;
		long long arr[len];
		for(long long i = 0; i < len; i++)
		{
			cin>>arr[i];
		}
		
		
		long long sum = 0;
		for(long long i = (n-1)/2*k; i<n*k; i = i + n/2+1)
		{
			sum = sum + arr[i];
		}
		cout<<sum<<endl;
		
	}
	
	return 0;
}
