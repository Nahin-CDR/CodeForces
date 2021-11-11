//Author : Nahin the Coder
//Date : 11-11-2021



#include<bits/stdc++.h>
using namespace std;

using ll = long long;


void Solve()
{
    
    ll n,limit,repeat;
    cin>>n>>limit>>repeat;

    ll arr[n];

    for(ll i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n,greater<>());

    //cout<<arr[0];
    
    ll sum = 0;
    ll cnt_1 = 1;
    ll cnt_2 = 1;

    bool on = true;
    bool on2 = false;

    for(ll i=1; i<=limit; i++)
    {
        if(cnt_1 <= repeat )
        {
            cnt_1++;
            sum = sum + arr[0];
           
        }
        else
        {
            sum = sum + arr[1];
            cnt_1 = 1;
            cnt_2++;
        }
    }
    
    cout<<sum<<endl;
   
   
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int test = 1;
    while(test--)
    {
        Solve();
    }

    return 0;
}
