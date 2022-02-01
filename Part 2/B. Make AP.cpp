//Author : Nahin  the Coder
//Date : 01-02-2022

#include<bits/stdc++.h>
using namespace std;



int main()
{
    int test; cin>>test;

    while(test--)
    {
        int a,b,c;
        cin>>a>>b>>c;
       
        if((b-a) == (c-b))
        {
            cout<<"Yes"<<endl;
            continue;
        }
       
        if((2*b - c)>0 and (2*b-c)%a == 0)
        {
            cout<<"Yes"<<endl;
            continue;
        }

        if((2*b-a)>0 and (2*b-a)%c==0)
        {
            cout<<"Yes"<<endl;
            continue;
        }

        if((c+a)>0 and (c+a)%(2*b)==0)
        {
            cout<<"Yes"<<endl;
            continue;
        }


        cout<<"No"<<endl;

    }




    return 0;
}
