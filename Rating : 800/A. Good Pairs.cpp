//Author : Nahin the Coder
//Date : 01-04-2022

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin>>test; 
    while(test--)
    {
        int n; cin>>n;
        int big = 1;
        int small = 1;
        int sV = 9999999999;
        int mV = 0;
        for(int i=0; i<n; i++)
        {
            int k ; cin>>k;
            if(k<sV)
            {
                sV = k;
                small = i+1;
            }
            if(k>mV)
            {
                mV = k;
                big = i+1;
            }
        }
        cout<<small <<" "<<big<<endl;
    }
    return 0;
}
