//Author : Nahin the Coder
//Date : 24-12-2021


#include<bits/stdc++.h>
using namespace std;

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);

    int test; cin>>test;
    while(test--)
    {
        string str;
        cin>>str;
        bool just_One = true;
        bool just_zero = true;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == '0')
            {
                just_One = false;
            }
            if(str[i] == '1')
            {
                just_zero = false;
            }
        }
        if(just_One == true or just_zero == true)
        {
            cout<<str<<endl;
        }
        else
        {
            if(str[0] == '0')
            {
                for(int i=0; i<str.size()*2; i++)
                {
                    if((i+1)%2!=0)
                    {
                        cout<<'0';
                    }
                    else
                    {
                        cout<<'1';
                    }
                }
                cout<<"\n";
            }
            else
            {
                for(int i=0; i<str.size()*2; i++)
                {
                    if((i+1)%2!=0)
                    {
                        cout<<'1';
                    }
                    else
                    {
                        cout<<'0';
                    }
                }
                cout<<"\n";
            }
        }

    }
    return 0;
}
