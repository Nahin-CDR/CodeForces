#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 27-03-2020
//Time   : 09:00 pm

int main()
{

    int x;
    int remaining;
    int counter = 0;
    int result = 0;
    cin>>x;
    int resultarray[x];

    for(int i=0; i<x; i++)
    {
        resultarray[i]=0;
    }

    if(x<=15)
    {
        if(x<=5)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<3<<endl;
        }
    }
    else
    {
        int fivechecker;
        fivechecker = x/5;
        resultarray[counter++] = fivechecker; //how many five's are needed

        remaining = x%5;
        if(remaining >=4 )
        {
            int fourchecker;
            fourchecker = remaining/4;
            resultarray[counter++] = fourchecker; //how many fours are needed
            remaining = remaining%4;

        }
        if(remaining>=3)
        {
            int threechecker;
            threechecker = remaining/3;
            resultarray[counter++] = threechecker; //how many three's are needed
            remaining = remaining%3;
        }
        if(remaining>=2)
        {
            int twochecker;
            twochecker = remaining/2;
            resultarray[counter++] = twochecker; //how many two's are needed
            remaining = remaining%2;
        }
        if(remaining>=1)
        {
            int onechecker;
            onechecker = remaining/1;
            resultarray[counter++] = onechecker; //how many two's are needed
        }

        for(int i = 0; i<counter; i++)
        {
            result = result + resultarray[i];
        }

        cout<<result<<endl;


    }


    return 0;
}
