// Solver : Nahin the Coder
// Date : 03 - 07 - 2021

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,x;
        ll sum1 = 0;
        ll sum2 = 0;
        cin>>n>>x;
        for(ll i = 1; i <= n; i++)
        {
            ll k;
            cin>>k;
            sum1 = sum1 + (k+x-1)/x;
            sum2 = sum2 + k;
        }
        cout<<(sum2+x-1)/x<<" "<<sum1<<"\n";
    }
    return 0;
}
