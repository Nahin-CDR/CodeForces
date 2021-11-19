//Author : Nahin the Coder
//Date : 19-11-2021

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
      ll n,k;
      cin>>n>>k;
      vector<ll>vc;
      for(ll i=0; i<k; i++)
      {
         ll p; cin>>p;
         vc.push_back(p);
      }
      sort(vc.begin(),vc.end());
      ll alive = 0;
      ll sum = 0;
      ll diff;
      ll prev;
      for(ll i=k-1; i>=0; i--)
      {
         prev = sum;
         diff =  n-vc[i];
         sum = sum + diff;
         if(diff < n-prev)
         {
            alive++;
         }
         else
         {
            break;
         }
      }
      cout<<alive<<"\n";
      vc.clear();
   }
   return 0;
}


/*
number of hands on your shoulder in bad times
is the actual number of friends u have made!

And yes money will do everything for u and 
it can buy fake friends too!
*/
