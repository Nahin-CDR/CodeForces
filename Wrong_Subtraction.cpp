#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin The Coder
//Date   : 21-04-2020
//Time   : 12:07 am

int last(int l)
{
    int digit;
    digit = l%10;
    return digit;
}

int main()
{

   int n,k;
   cin>>n>>k;
   int m;
   while(k--)
   {
       m = last(n);
       if(m>0)
       {
           n--;
       }
       else
       {
           n = n/10;
       }
       
   }
   
    cout<<n<<endl;
    return 0;
}
