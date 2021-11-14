//Author : Nahin the Coder
//Date : 14 - 11 - 2021





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
      ll l,r,d;
      cin>>l>>r>>d;
      if(d<l)
      {
         cout<<d<<endl;
      }
      else if(d>l and d>r)
      {
         cout<<d<<endl;
      }
      else if(d>=l and d<=r)
      {
         bool turn = true;
         ll cnt = r/d + 1;
         while(turn)
         {
            ll check = d*cnt;
            if(check  > r)
            {
               cout<<check<<endl;
               turn = false;
            }
            cnt++;
         }
      }
      else
      {
         cout<<"FUCK"<<endl;
      }
   }   
   return 0;
}
