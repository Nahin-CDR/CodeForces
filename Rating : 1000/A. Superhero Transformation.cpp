
//Author : Nahin the Coder
//Date : 12-11-2021

#include <bits/stdc++.h>
using namespace std;

bool Check(char ch)
{
    if(ch == 'a' or ch == 'i')
    {
        return true;
    }
    if(ch == 'e' or ch == 'o')
    {
        return true;
    }
    if(ch == 'u')
    {
        return true;
    }
    
    
    return false;
}


int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    string s1,s2;
    cin>>s1>>s2;
    

  

   
    if(s1.length() != s2.length())
    {
        cout<<"No"<<endl;
    }
    else
    {
        int len = s1.length();
        int cnt1 = 0;
        int cnt2 = 0;
        bool ans = true;
        for(int i=0; i<len; i++)
        {
            if(Check(s1[i]))
            {
                cnt1++;
            }
            if(Check(s2[i]))
            {
                cnt2++;
            }
            if(cnt1 != cnt2)
            {
               ans = false;
            }
        }
        if(ans == true)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
