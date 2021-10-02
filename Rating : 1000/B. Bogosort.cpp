//Solver : NAhin the Coder
//Date : 02-10-2021

#include<bits/stdc++.h>
using namespace std;


int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);

   int test;
   cin>>test;
   while(test--)
   {
       int n; cin>>n;
       int len = n; 
       vector<int>vc;
       while(n--)
       {
           int k; cin>>k;
           vc.push_back(k);
       }
       sort(vc.begin(),vc.end(),greater<>());
       for(int i:vc)
       {
           cout<<i<<" ";
       }

       cout<<"\n";
   }
   return 0;
}
