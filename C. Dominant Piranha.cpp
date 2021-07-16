//Solver : Nahin the Coder
//Date  : 16 - 07 - 2021

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
		long long n;
		cin>>n;
		long long counter = n;
		map<long long,long long>mp;
		
		long long arr[n];

		long long small = 9999999999;
		long long big = -1;
		
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			if(small>arr[i])
			{
				small = arr[i];
			}
			if(big<arr[i])
			{
				big = arr[i];
			}
			mp[arr[i]]++;
		}
		if(mp.size()==1)
		{
			cout<<-1<<"\n";
			continue;
		}
		
		int ans = 0;
		
		for(int i=0; i<n; i++)
		{
			if(arr[i] == big)
			{
				if(i==0)
				{
					if(big>arr[i+1])
					{
						ans = i+1;
						break;
					}
				}
				if(i>0 and i<n-1)
				{
					if(big>arr[i+1])
					{
						ans = i+1;
						break;
					}
					if(big>arr[i-1])
					{
						ans = i+1;
						break;
					}
				}
				if(i==n-1)
				{
					if(big>arr[i+1])
					{
						ans = i+1;
						break;
					}
				}
				if(big>arr[i-1] and i>=1)
				{
					ans = i+1;
					break;
				}
				if(big>arr[i+1] and i>=n-1)
				{
					ans = i+1;
					break;
				}
			}
		}
		if(ans != 0)
		{
			cout<<ans<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}
	
	

	
	
	
	
	
	return 0;
}
