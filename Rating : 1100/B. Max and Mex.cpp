//Author : Nahin the Coder
//Date  : 27-11-2021

#include<bits/stdc++.h>
using namespace std;


int main()
{
  
	ios::sync_with_stdio(false);
	cin.tie(0);
  
	int test; cin>>test;
	while(test--)
	{
		int n,k; cin>>n>>k;
		map<int,int>mp;
		int arr[n];
		int cnt = 0;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			++mp[arr[i]];
		}
		sort(arr,arr+n);
		bool got = false;
		int small = 0;
		for(int i=0; i<n; i++)
		{
			if(arr[i]!=i)
			{
				got = true;
				small = i;
				break;
			}
		}
		if(got != true)
		{
			cout<<mp.size()+k<<endl;
			continue;
		}
		int big = arr[n-1];
		int mexAndmax = (small+big)/2 + (((small+big)%2)>0?1:0);
		if(k == 0)
		{
			cout<<mp.size()<<endl;
		}
		else
		{
			mp.insert({mexAndmax,10});
			cout<<mp.size()<<endl;
		}
	}
	
	return 0;
}
