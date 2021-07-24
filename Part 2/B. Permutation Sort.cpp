//Solver : Nahin the Coder
//Date : 24 - 07 - 2021
#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	
	ll test;
	cin>>test;
	while(test--)
	{
		ll len;
		cin>>len;
		ll arr2[len];
		ll arr[len];
		for(ll i = 0; i<len; i++)
		{
			cin>>arr[i];
			arr2[i] = arr[i];
		}
		sort(arr2,arr2+len);
		
		ll last = arr2[len-1];
		ll first = arr2[0];
		
		bool sorted = true;
		
		for(ll i=0; i<len; i++)
		{
			if(arr2[i] != arr[i])
			{
				sorted = false;
				break;
			}
		}
		if(sorted == true)
		{
			cout<<0<<endl;	
		}
		else if(arr[0] == first or last == arr[len-1])
		{
			cout<<1<<"\n";
		}
		else if(last == arr[0] and first == arr[len-1])
		{
			cout<<3<<endl;
		}
		else
		{
			cout<<2<<endl;
		}	
		
	}
	
	return 0;
}
