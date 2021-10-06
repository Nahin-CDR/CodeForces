//Solver : Nahin the coder
//Date : 05-10-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long; 


bool check_13(ll n)
{
    ll remainder[6] = {20,19,18,17,16,15};
    if(n<15)
    {
        n = n+13;
        for(ll i=0; i<6; i++)
        {
            if(n == remainder[i])
            {
                return true; 
            }
        }
    }
    else
    {
        for(ll i=0; i<6; i++)
        {
            if(n == remainder[i])
            {
                return true; 
            }
        }
    }
    return false;
}

bool check_14(ll n)
{
    ll remainder[6] = {20,19,18,17,16,15};
    if(n<15)
    {
        n = n+14;
        for(ll i=0; i<6; i++)
        {
            if(n == remainder[i])
            {
                return true; 
            }
        }
    }
    else
    {
        for(ll i=0; i<6; i++)
        {
            if(n == remainder[i])
            {
                return true; 
            }
        }
    }
    return false;
}


bool check_15(ll n)
{
    ll remainder[6] = {20,19,18,17,16,15};
    if(n<15)
    {
        n = n+15;
        for(ll i=0; i<6; i++)
        {
            if(n == remainder[i])
            {
                return true; 
            }
        }
    }
    else
    {
        for(ll i=0; i<6; i++)
        {
            if(n == remainder[i])
            {
                return true; 
            }
        }
    }
    return false;
}




int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
  
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n; 
        if(n<15)
        {
            cout<<"NO"<<"\n"; 
            continue;
        }
        ll res1 = n%13; 
        ll res2 = n%14;
        ll res3 = n%15; 
        if(res2>=1 and res2<7)
        {
            cout<<"YES"<<endl;
        }
        // else if(check_14(res2))
        // {
        //     cout<<"YES"<<endl;
        // }
        // else if(check_15(res3)) 
        // {
        //     cout<<"YES5"<<endl;
        // }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
