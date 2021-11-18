//Author : Nahin the Coder
//Date : 18-11-2021

#include<bits/stdc++.h>
using namespace std;




int main()
{

   ios::sync_with_stdio(false);
   cin.tie(0);
   
   int a,b,c;
   cin>>a>>b>>c;
   
   int total_data = a*c;
   int remaining = total_data - (b*c);
   int waiting_time = 0;
   
   int downloaded = 0;

   bool turn = true;
   while(turn)
   {
       downloaded = downloaded + b;
       if(downloaded >= remaining)
       {
           waiting_time++;
           turn = false;
       }
       else
       {
            waiting_time++;
       }
   }
   cout<<waiting_time<<endl;  
   
    
    
    return 0;
}
