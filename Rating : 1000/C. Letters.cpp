//Author : Nahin the Coder
//Date : 16-11-2021

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll d[1000001];


int main()
{

   ios::sync_with_stdio(false);
   cin.tie(0);
   
   ll dormitories,letter;
   cin>>dormitories>>letter;

  
   ll l[letter];
   
   ll rooms = 0;
   ll x;
   for(ll i=1; i<=dormitories; i++)
   {
      cin>>x;
      d[i]=d[i-1]+x;
   }


   for(ll i = 0; i<letter; i++)
   {
      cin>>l[i];
   }
   ll f;
   
   for(ll i=0; i<letter; i++)
   {
      ll check = l[i]; //BinarySearch(1,rooms,l[i]);
      f = lower_bound(d,d+dormitories+1,check)-d;
      cout<<f<<" "<<check-d[f-1]<<endl;
   }    
   return 0;
}
