//Solver : Nahin the coder
//Date : 23-09-2021

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll n;
    cin>>n;
    
    ll arr[n];
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    ll f = 0;
    ll s = n-1;
     
    if(n%2 == 0)
    {
    	cout<<(n/2)-1<<endl;
        for(ll i = 0; i<n/2; i++)
        {
            cout<<arr[s--]<<" "<<arr[f++]<<" ";
        }
    }
    else
    {
    	cout<<n/2<<endl;
    	for(ll i = 0; i<n/2; i++)
        {
            cout<<arr[s--]<<" "<<arr[f++]<<" ";
        }
        cout<<arr[f];
	}
    
    return 0;
}
