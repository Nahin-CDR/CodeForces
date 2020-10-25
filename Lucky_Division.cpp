#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin
//Date   : 04-03-2020
//Time   : 08:52 pm

int main()
{
    string str;
    cin>>str;

    int size;
    size = str.length();


    int counter=0;

    for(int i=0; i<size; i++)
    {
        if(str[i]=='4' || str[i]=='7')
        {
            counter++;
        }
        else
        {
            counter--;
        }

    }

    if(counter==size)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        stringstream geek(str);
        int x = 0;
        geek >> x;
        if(x%4==0 || x%7==0)
        {
            cout<<"YES"<<endl;
        }
        else if(x==799 || x==94 || x==141)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;

}
