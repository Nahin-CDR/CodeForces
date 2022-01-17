//Author : Nahin the Coder
//Date : 17-01-2022

#include<bits/stdc++.h>
using namespace std;



int main()
{
	int test; cin>>test;
    while(test--)
	{
		int n; cin>>n;
        int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		map<int,int>mp;

		for(int i=0; i<n; i++)
		{
			int it = arr[i];
			while(it>0)
			{
				if(it >= 1 and it<=n and mp[it] == 0 )
				{
					mp[it] = 1;
					break;
				}
				it = it/2;
			}
		}

		bool check = true;

		for(int i=1; i<=n; i++)
		{
			if(mp[i] != 1)
			{
				check = false;
			}
		}
		if(check)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}


   
	return 0;
}

