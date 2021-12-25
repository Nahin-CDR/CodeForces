//Author : Nahin the Coder
//Date : 25-12-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test; cin>>test;
    while(test--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int counter = 0;
        int minimum;
        for(int i=n-1; i>=0; i--)
        {
            if(i==(n-1))
            {
                minimum = arr[i];
            }
            else
            {
                if(arr[i]>minimum)
                {
                    counter++;
                }
                else
                {
                    minimum = arr[i];
                }
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
