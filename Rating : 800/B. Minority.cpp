//Author : Nahin the Coder
//Date : 02-02-2022

#include<bits/stdc++.h>
using namespace std;

int main()
{
    
    
    int test; cin>>test;
    while(test--)
    {
        string s;
        cin>>s;
        int one = 0;
        int zero = 0;

        for(int i=0; i<s.length(); i++)
        {
            if(s[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }
       
        if(one == zero)
        {
            cout<<one-1<<endl;
        }
        else if(one > zero )
        {
            cout<<zero<<endl;
        }
        else
        {
            cout<<one<<endl;
        }
    }
   

	return 0;
}
