//Author : Nahin  the Coder
//Date : 01-02-2022

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int test; cin>>test;
    while(test--)
    {
        map<char,int>mp;
        string str;
        cin>>str;
        for(int i=0; i<str.length(); i++)
        {
            char ch = str[i];
            ++mp[ch];
        }
        for(auto it:mp)
        {
            char c = it.first;
            int loop = it.second;
            while(loop--)
            {
                cout<<c;
            }
        }
        cout<<"\n";
    }



    return 0;
}
