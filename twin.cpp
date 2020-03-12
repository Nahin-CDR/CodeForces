#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 12-03-2020
//Time   : 10:21 am

int main()
{
    int size;
    cin>>size;

    float store = 0;

    float arr[size];

    float  equal;

    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
        store = store + arr[i];
    }

    int temp;

    //code for sorting
    for(int i = 0; i<size-1; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    if(size<=2)
    {
        if(arr[0]==arr[1])
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
    else
    {
        int counter = 0;
        equal = store/2;
        int me = 0;
        int hi = arr[0];
        for(int i = 1; i<size; i++)
        {
            if(hi<arr[i])
            {
                hi = arr[i];
            }
        }
        if(hi>equal)
        {
            cout<<1<<endl;
        }
        else
        {
            for(int i=size-1; i>=0; i--)
            {
                me = me + arr[i];
                counter++;
                if(me>equal)
                {
                cout<<counter<<endl;
                break;
                }
            }
        }
    }
    return 0;
}
