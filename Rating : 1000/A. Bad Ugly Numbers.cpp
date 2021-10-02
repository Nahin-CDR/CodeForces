//Solver : Nahin the coder
//Date : 02-10-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long; 


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    ll test;
    cin>>test;  
    while(test--)
    {
       ll n;
       cin>>n;
       if(n==1)
       {
           cout<<-1<<endl;continue;
       }
       if(n == 2)
       {
           cout<<73<<endl; continue;
       }
       for(int i=1; i<=n; i++)
       {
           if(i==1)
           {
               cout<<2;
           }
           else
           {   
                cout<<7; 
           }
       }
       cout<<"\n";
    }
    return 0;
}
