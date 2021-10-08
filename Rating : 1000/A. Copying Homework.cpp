//Solver : Nahin the coder
//Date : 08-10-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long; 



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    ll arr[n];
    ll max = -1;
    ll maxIndex;
    ll minIndex;
    ll min = 9999999;
    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
        if(max < arr[i])
        {
            max  = arr[i];
            maxIndex = i; 
        } 
        if(min>arr[i])
        {
            min = arr[i];
            minIndex = i; 
        }
    }
    
    for(ll i=0; i<n; i++)
    {
        if(i==maxIndex)
        {
            cout<<min<<" ";
        }
        else if(i==minIndex)
        {
            cout<<max<<" ";
        }
        else
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}
