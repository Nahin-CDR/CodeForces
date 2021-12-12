//Author : Nahin
//Date : 12-12-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
     ios::sync_with_stdio(false);
     cin.tie(0);
  
     int test; cin>>test;
     while(test--)
     {
           int n;
           cin>>n;
           int arr[n];
           for(int i=0; i<n; i++)
           {
                 cin>>arr[i];
           }
           sort(arr,arr+n);
           int mini = INT_MAX;
           int count = 0;
           for(int i=1; i<n; i++)
           {
                  mini = min(mini,abs(arr[i]-arr[i-1]));
                  if(mini<arr[i])
                  {
                        break;
                  }
                  else
                  {
                        count++;
                  }
            }
            cout<<++count<<endl;
     }
     

     return 0;
}
