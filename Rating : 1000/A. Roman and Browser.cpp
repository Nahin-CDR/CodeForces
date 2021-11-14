//Author : Nahin the Coder
//Date : 14-11-2021

#include <bits/stdc++.h>
using namespace std;

int main() 
{

   ios::sync_with_stdio(false);
   cin.tie(0);

   int n,k;
   cin>>n>>k;

   int arr[n];
   int Total_minus = 0;
   int Total_plus = 0;

   vector<int>m;
   vector<int>p;

   for(int i=0; i<n; i++)
   {
      cin>>arr[i];
      if(arr[i]<0)
      {
         Total_minus++;
      }
      else
      {
         Total_plus++;
      }
   }
   
   // C= b + i*k ;

   int counter = 1;

   if(Total_minus<=Total_plus)
   {
      //Then our target is to remove all the minuses from the array
      
      int maximum_Minus = -1;
      int PLUS_COUNTER = 0;

      int maximum_Result = -1;

      for(int i=1; i<=n; i++)
      {
         //for minuses
         bool turn = true;
         int mini_1 = -1;
         int mini_2 = 0;
         int b = i;
         int minus_counter = 0;
         int plus_counter = 0;
         
         bool check_1 = true;
         bool check_2 = true;

         while(turn)
         {
            int c1 = b + mini_1*k;

            if(check_1 == true)
            {
               if(c1 >= 1 and c1 <= n)
               {
                  if(arr[c1-1]<0)
                  {
                     minus_counter++;
                  }
                  else
                  {
                     plus_counter++;
                  }
                  mini_1--;
               }
               else
               {
                  check_1 = false;
               } 
            }
            
 
            int c2 = b + mini_2*k;


            if(check_2 == true)
            {
               if(c2 >= 1 and c2 <= n )
               {
                  if(arr[c2-1]<0)
                  {
                     minus_counter++;
                  }
                  else
                  {
                     plus_counter++;
                  }
                  mini_2++;
               }
               else
               {
                  check_2 = false;
               }
            }

            if(check_1 == false and check_2 == false)
            {
               turn = false;
            }  
         }
         
         int res1 = Total_plus - plus_counter;
         int res2 = Total_minus - minus_counter;
         int result = abs(res1 - res2);
         if(result> maximum_Result)
         {
            maximum_Result = result;
         }
      }
      cout<<maximum_Result<<endl;
   }
   else
   {

      // when (minus > plus)
      //Then our target is to remove all the pluses from the array

      int maximum_Plus = -1;
      int MINUS_COUNTER = 0;

      int maximum_Result = -1;

      for(int i=1; i<=n; i++)
      {
         

         //for minuses
         bool turn = true;
         int mini_1 = -1;
         int mini_2 = 0;
         int b = i;
         int minus_counter = 0;
         int plus_counter = 0;
         
         bool check_1 = true;
         bool check_2 = true;

         while(turn)
         {
            int c1 = b + mini_1*k;

            if(check_1 == true)
            {
               if(c1 >= 1 and c1 <= n)
               {
                  if(arr[c1-1]>0)
                  {
                     plus_counter++;
                  }
                  else
                  {
                     minus_counter++;
                  }
                  mini_1--;
               }
               else
               {
                  check_1 = false;
               } 
            }
            
 
            int c2 = b + mini_2*k;


            if(check_2 == true)
            {
               if(c2 >= 1 and c2 <= n )
               {
                  if(arr[c2-1]>0)
                  {
                     plus_counter++;
                  }
                  else
                  {
                     minus_counter++;
                  }
                  mini_2++;
               }
               else
               {
                  check_2 = false;
               }
            }

            if(check_1 == false and check_2 == false)
            {
               turn = false;
            }  
         }
         int res1 = Total_plus - plus_counter;
         int res2 = Total_minus - minus_counter;
         int result = abs(res1-res2);
         if(result > maximum_Result)
         {
            maximum_Result = result; 
         }
      }
     
      cout<<maximum_Result<<endl;
   }
   return 0;
}
