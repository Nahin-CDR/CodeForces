#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the coder
//Date : 19-02-2020

int main()
{
    int testcase;
    cin>>testcase;


    char ab[testcase];
    for(int i=0; i<testcase; i++)
    {
        cin>>ab[i];
    }

    int size = testcase;

    int count = 0;

    if(size>=2)
    {
        for(int i=0; i<size; i++)
        {
            if(ab[i]==ab[i+1])
            {
                count++;
            }
        }
    }
    else
    {
        count=0;
    }

    cout<<count;

    return 0;

}
