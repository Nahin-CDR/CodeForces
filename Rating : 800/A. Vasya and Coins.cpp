//Solver : Nahin the Coder
//Date : 04-04-2022

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test; cin>>test;

    while(test--)
    {
        long long a,b;
        cin>>a>>b;
        if(a == 0 and b == 0)
        {
            cout<<1<<endl;
        }
        else if(a == 0)
        {
            cout<<1<<endl;
        }
        else if(b == 0)
        {
            cout<<a+1<<endl;
        }
        else
        {
            long long c = b*2 + a;
            cout<<c+1<<endl;
        }
    }


    return 0;
}
