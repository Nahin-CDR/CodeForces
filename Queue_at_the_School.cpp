#include<bits/stdc++.h>
using namespace std;
//Solver : Nahin The Coder
//Date   : 21-04-2020
//Time   : 08:09pm
int main()
{


    int size,t;
    cin>>size>>t;

    char arr[size];
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    while(t--)
    {
        for(int i = 0; i<size-1; i++)
        {
            if(arr[i]=='B' && arr[i+1]=='G')
            {
                char temp;
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                i++;

            }

        }
    }


    for(int i = 0; i<size; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;

    return 0;

}
