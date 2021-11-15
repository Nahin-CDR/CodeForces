//Author : Nahin the Coder
//Date : 15-11-2021

#include <bits/stdc++.h>
using namespace std;






int main()
{

   ios::sync_with_stdio(false);
   cin.tie(0);

   int n,k;
   cin>>n>>k;
  
   
   int prev = 0;
   int maximum = -1;
   int counter = 1;

   for(int i=0; i<n; i++)
   {
      int h;
      cin>>h;
      if(i == 0)
      {
         prev = h;
      }
      else
      {
         if(prev != h)
         {
            counter++;
            prev = h;
            
         }
         else
         {
            if(counter>maximum)
            {
               maximum = counter;
            }
            counter = 1;
            prev = h;
         }
      }
   }

   maximum = max(maximum,counter);
   cout<<maximum<<endl;

   return 0;
}
