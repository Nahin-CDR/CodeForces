//Author : Nahin the Coder
//Date : 28-2-2022

#include<bits/stdc++.h>
using namespace std;



int main()
{
    int test; cin>>test;
    
    while(test--)
    {
        string str;
        cin>>str;
        char ch;
        cin>>ch;
    
        int idx = 0;
        bool got = false;

        for(int i=0; i<str.length(); i++)
        {
            if(str[i] == ch and (i+1)%2 !=0 )
            {
                got = true;
               
            }

        }

        if(got)
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
