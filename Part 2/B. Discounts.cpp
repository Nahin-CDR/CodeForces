//Nahin the coder
//Date : 04 - 09 - 2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll sum = 0;
	
	long long n;
	cin>>n;
	
	ll arr[n];
	
	for(ll i=0; i<n; i++)
	{
		cin>>arr[i];
		sum = sum + arr[i];
	}
	
	sort(arr,arr+n);
	
	ll q;
	cin>>q;
	
    ll arr2[q];
    for(ll i=0; i<q; i++)
    {
    	cin>>arr2[i];
	}
	
	
	for(ll i=0; i<q; i++)
	{
		cout<<sum-arr[n-arr2[i]]<<endl; 
	}
	
	
	return 0;
}
