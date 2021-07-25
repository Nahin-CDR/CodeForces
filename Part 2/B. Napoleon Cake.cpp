//Solver : Nahin the Coder
//Date : 25-07-2021

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    
    
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int arr[n];
        int arr2[n];
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int temp = arr[n-1];
        for(int i=n-1; i>=0; i--)
        {
            if(arr[i]>0)
            {
                temp = max(arr[i],temp);
            }
            if(temp>0)
            {
                arr[i] = 1;
                temp--;
            }
            else
            {
                arr[i] = 0;
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
