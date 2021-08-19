//Solver : Nahin the coder
//Date : 19 - 08 - 2021


#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll test;
	cin>>test;
	while(test--)
	{
		ll arr[3];
		cin>>arr[0]>>arr[1]>>arr[2];
		sort(arr,arr+3);
		if(arr[2]<=arr[0]+arr[1]+1) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	
	return 0;
}
