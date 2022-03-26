//Author : Nahin the Coder
//Date : 26-03-2022

#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
        
    int test; cin>>test;
    while(test--)
    {
        double x,y;
        cin>>x>>y;
        
        double result = x*x + y*y;
        double s = sqrt(result);
        int check = (int)(s);
        if(s == 0)
        {
            cout<<0<<endl;
        }
        else if(s == check)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }


    return 0;
}
