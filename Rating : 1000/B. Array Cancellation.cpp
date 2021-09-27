//Solver : Nahin the Coder
//Date  :  27-09-2021


#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);


    ll test; cin>>test;
    while(test--){
        ll n;
        cin>>n;
        ll arr[100009];
        ll s = 0;
        ll maxi = 0;
        ll k;
        for(ll i=0; i<n; i++){
            cin>>arr[i];
        }
        for(ll i=n-1; i>=0; i--){
            s = s+arr[i];
            maxi = max(maxi,s);
        }
        cout<<maxi<<endl;    
    }






    return 0;
}
