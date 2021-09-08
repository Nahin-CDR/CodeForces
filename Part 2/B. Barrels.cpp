//Solver : Nahin the Coder
//Date : 08-09-2021
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
    ll test;
    cin>>test;
    while(test--){
         
		ll	n,k;
		cin>>n>>k;
		ll arr[n];
		for(ll i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		ll counter = arr[--n];
		while(k--)
		{
			counter = counter+arr[--n];
		}
		cout<<counter<<endl;
	}
	return 0;
}
