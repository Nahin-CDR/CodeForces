//Solver : Nahin the coder
//Date : 06-10-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long; 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
  
    int test;
    cin>>test;
    while(test--)
    {
       ll x,y;
       cin>>x>>y;
       if(x>=y)
       {
           cout<<"YES"<<endl;
       }
       else
       {
           ll prev = x;
           if(x%2 == 0 and x>=2)
           {
               x = (x*3)/2;
               if(x >=y )
               {
                   cout<<"YES"<<endl;
               }
               else if(x%2 != 0)
               {
                   x = x-1;
                   if(x==prev)
                   {
                       cout<<"NO"<<endl;
                   }
                   else
                   {
                       cout<<"YES"<<endl;
                   }
               }
               else
               {
                   cout<<"YES"<<endl;
               }
           }
           else if(x%2 !=0 and x>2)
           {
               x = x-1;
               x = (x*3)/2;
               if(x == prev)
               {
                   cout<<"NO"<<endl;
               }
               else
               {
                   cout<<"YES"<<endl;
               }
           }
           else
           {
               cout<<"NO"<<endl;
           }
       }
    }
    return 0;
}
