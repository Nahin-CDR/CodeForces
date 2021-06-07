#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[m];
 
    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
    }
 
    sort(arr,arr+m);
 
    int minimum = 1000;
    int first = 0;
    int second;
 
    for(int i = 0; i<m-n+1; i++)
    {
        second = i+n-1;
        if(minimum>arr[second]-arr[first])
        {
            minimum = arr[second]-arr[first];
        }
        first++;
       
    }
 
 
    cout<<minimum<<endl;
 
    return 0;
 
}
