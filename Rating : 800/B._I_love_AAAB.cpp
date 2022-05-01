//Author : Nahin the Coder
//Date : 01-05-2022

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;
    while(test--)
    {
        string str;
        cin >> str;
        if(str.length() < 2) 
        {
            cout<<"NO"<<endl;
        }
        else
        {
            bool yes = true;
            int a = 0;
            int b = 0;
            for(int i=0; i<str.length(); i++)
            {
                if(str[i] == 'A' and i == str.length()-1)
                {
                    yes = false;
                }
                if(str[i] == 'A')
                {
                    a++;
                }
                else if(str[i] == 'B' and a>0)
                {
                    a--;
                }
                else
                {
                    yes = false;
                }
            }
            if(yes)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
