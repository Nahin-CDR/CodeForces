//Author : Nahin - CDR
//Date : 28-12-2021

#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin>>test;
    while(test--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b == c)
        {
            cout<<"YES"<<endl;
        }
        else if(a+c == b)
        {
            cout<<"YES"<<endl;
        }
        else if(b+c == a)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            if(a==b and c%2 == 0)
            {
                cout<<"YES"<<endl;
            }
            else if(a==c and b%2 == 0)
            {
                cout<<"YES"<<endl;
            }
            else if(b==c and a%2 == 0)
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
