//Solver : Nahin the Coder
//Date : 27-08-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ll n,min,max;
    cin>>n>>min>>max;
    //ll minimum = 0;
    ll maximum = 0;
    ll maxCounter = 0;
    ll minCounter = 0;
    ll minimum = 0;
    //loop for maximum
    for(ll i=0; i<n; i++)
    {
        if(i==0)
        {
       maximum++;
       maxCounter = maxCounter+maximum;
        }
        else
        {
            if(max-1>0)
            {
       maximum = maximum*2;
       maxCounter = maxCounter + maximum;
       max--;
            }
            else
            {
       maxCounter = maxCounter + maximum;
            }
        }
    }
    
    
    //loop for minimum counter
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            minimum++;
            minCounter = minCounter + minimum;
            min--;
        }
        else
        {
            if(min>0)
            {
         minimum = minimum * 2;
         minCounter = minCounter + minimum;
         min--;
            }
            else
            {
                minCounter++;
            }
        }
    }
    
    cout<<minCounter<<" "<<maxCounter;
    
    
    
    
    return 0;
}
