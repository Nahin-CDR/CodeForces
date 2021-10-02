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
    while(test--){
      ll a,b,x,y;
      cin>>x>>y; 
      cin>>a>>b; 

      if(x==y and x == 0)
      {
        cout<<0<<endl;
      }
      else if(x == 0 and y != 0)
      {
        cout<<a*y<<endl;
      }
      else if(x != 0 and y == 0 )
      {
        cout<<a*x<<endl;
      }
      else if(x == y)
      {
        ll res1 = (x+y)*a;
        ll res2 = x*b;
        cout<<min(res1,res2)<<endl;
      }
      else
      {
        if(x>y)
        {
            ll remain = x-y;
            ll res1 = remain*a; // Single bit
            ll res2 = y*b; //double bit 
            ll res3 = (x+y)*a;
            cout<<min(res3,(res1+res2))<<endl;
        }
        else
        {
            ll remain = y-x;
            ll res1 = remain*a; // Single bit
            ll res2 = x*b; //double bit 
            ll res3 = (x+y)*a;
            cout<<min(res3,(res1+res2))<<endl;
        }
      }



    }
    return 0;
}
