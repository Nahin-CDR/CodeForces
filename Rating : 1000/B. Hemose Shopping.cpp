//Solver : Nahin the Coder
//Date   : 04-10-2021
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,x;
        cin>>n>>x;
        ll arr1[n];
        ll arr2[n];
        for(ll i=0; i<n; i++)
        {
            cin>>arr1[i];
            arr2[i] = arr1[i];
        }
        
        sort(arr2,arr2+n);
        ll last = arr2[n-1];
        bool ok = true;
        bool pas = true;
        for(ll i=n-x; i<x; i++)
        {
            if(arr2[i] != arr1[i])
            {
                ok = false;
            }
        }
        if(ok)
        {
            cout<<"YES"<<endl;
        }
        else
        {
                cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}
 
