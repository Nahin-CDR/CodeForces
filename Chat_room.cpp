#include<bits/stdc++.h>
using namespace std;

//solver : Nahin the Coder
//date   : 2-03-2020
//Time   : 10:46 pm

int main()
{
    string ab;

    cin>>ab;

    int size = ab.length();
    string bc = "hello";
    int counter = 0;
   
    for(int i = 0; i<=size; i++)
    {
        if(ab[i]==bc[counter])
        {
           counter++;
        }
        if(counter==5)
        {
            goto level;
        }

    }

    level:
    if(counter==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
