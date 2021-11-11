//Author : Nahin the Coder
//Date : 09-11-2021



#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    
    int res = n*3 + min(n-k,k-1);
    cout<<res;
    /*if(n == k or k == 1)
    {
        int sum = 0;
        for(int i=1; i<=n; i++)
        {
            if(i==1)
            {
                sum = sum + 2;
            }
            else if(i == 2)
            {
                sum = sum + 4;
            }
            else
            {
                sum = sum + 3;
            }
        }
        cout<<sum<<endl;
    }
    else
    {
        int mid = n/2;
        if(k<mid)
        {
            int sum  = 0;

            //Collecting Coins From first half

            for(int i=k; i<=1; i--)
            {
                if(i==k)
                {
                    sum = sum + 2;
                }
                else if(i+1 == k)
                {
                    sum = sum + 4;
                }
                else
                {
                    sum = sum +3;
                }
            }
            //Adding return cost
            sum = sum + (k-1);
            //Now Collecting Coins from Second Half
            int remaining = n-k;
            sum = sum + (remaining*3);
            //Result 
            cout<<sum<<endl;
        }
        else if(k>mid)
        {
            int sum = 0;
            //calculating last half
            for(int i=k; i<=n; i++)
            {
                if(i==k)
                {
                    sum = sum + 2;
                }
                else if(i-1 == k)
                {
                    sum = sum + 4;
                }
                else
                {
                    sum = sum + 3;
                }
            }
            //Adding return cost
            sum = sum + (n-k);
            //Now calculating first half
            int remaining = (k-1)*3;
            sum = sum + remaining;
            //Result
            cout<<sum<<endl;
        }
        else
        {
            int sum = 0;
            for(int i=1; i<=k; i++)
            {
                if(i==1)
                {
                    sum = sum+2;
                }
                else if(i == 2)
                {
                    sum = sum + 4;
                }
                else
                {
                    sum = sum + 3;
                }
            }
            //adding return
            sum = sum + (k-1);
            //2nd half
            int remaining = n-k;
            sum = sum + (remaining*3);
            cout<<sum<<endl;
        }
    }*/
    return 0;
}
