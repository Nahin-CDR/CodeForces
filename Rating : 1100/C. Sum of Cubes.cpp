//Author : Nahin -CDR
//Date : 22-12-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long;






int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll test; cin>>test;
    while(test--)
    {
        ll n; cin>>n;
        
        bool yes = false;
        map<ll,ll>mp;
        for(ll i=1; i*i*i<=n; i++)
        {
            mp[i*i*i] = i;     
        }
        for(auto it:mp)
        {
            ll firstNumber = it.first;
            ll secondNumber = n-firstNumber;
            if(mp.find(secondNumber) != mp.end())
            {
                yes = true;
                break;
            }
        }
        if(yes)
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
