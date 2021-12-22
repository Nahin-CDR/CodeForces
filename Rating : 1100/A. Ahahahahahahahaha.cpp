//Author : Nahin the Coder
//Date : 22-12-2021

#include<bits/stdc++.h>
using namespace std;



int main()
{
    int test; cin>>test;
    while(test--)
    {
        int n; cin>>n;
        int zero = 0;
        int one = 0;
        for(int i=1 ; i<=n ; i++)
        {
            int f; cin>>f;
            if(f)
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
        if(zero >= n/2)
        {
            cout<<zero<<"\n";
            while(zero--)
            {
                cout<<0<<" ";
            }
            cout<<"\n";
        }
        else
        {
            if(one%2 != 0)
            {
                --one;
                cout<<one<<"\n";
                while(one--)
                {
                    cout<<1<<" ";
                }
                cout<<"\n";
            }
            else
            {
                cout<<one<<"\n";
                while(one--)
                {
                    cout<<1<<" ";
                }
                cout<<"\n";
            }
        }
    
    }
    return 0;
}
