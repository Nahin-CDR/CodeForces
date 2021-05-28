#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 28-05-2020
//Time   : 04:14 pm [Eid ul Fitr Day]


int main()
{
    

    int n; 
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int counter = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != arr[i+1])
        {
            counter++;
        }
    }

    cout<<counter<<endl;

      
    return 0;
}
