//Author : Nahin the Coder
//Date  : 28-11-2021

#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
    
	int test; cin>>test;
	while(test--)
	{
		int n; cin>>n;
		int arr[n];
		int ans[n+1][n];
		
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			ans[0][i]=arr[i];
		} 
			
        for(int j=1; j<=n; j++)
		{
			map<int,int>mp;
			for(int i=0; i<n; i++)
			{
				++mp[arr[i]];
			}
			for(int i=0; i<n; i++)
			{
				arr[i] = mp[arr[i]];
				ans[j][i] = arr[i];
			}					
		}
		int Q; cin>>Q;
		while(Q--)
		{
			int index,times;
			cin>>index>>times;
			--index;
			if(n>=times)
			{
				cout<<ans[times][index]<<endl;
			}
			else
			{
				cout<<ans[n][index]<<endl;
			}
		}
	}
	
	return 0;
}
