//Author : Nahin the Coder
//Date : 15 - 11 - 2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   ll n,t;
   cin>>n>>t;
   ll arr[n];
   for(ll i=0; i<n; i++)
   {
      cin>>arr[i];
   } 
   sort(arr,arr+n);
   ll start = arr[0]; 
   ll minus = start;
   ll left =0;
   ll sub;
   while(t--)
   {
      bool taken = true;
      cout<<start<<endl;
      ll mn = minus;
      
      for(int i=left; i<n; i++)
      {
         arr[i] = arr[i]-mn;
         if(arr[i] > 0 and taken == true)
         {
            left = i+1;
            start = arr[i];
            minus += arr[i];
            taken = false;
            break;
         }
         if(arr[i]<-50)
         {
            break;
         }
      } 
     
      if(taken)
      {
         start = 0;
      }
   }

   
   return 0;
}
