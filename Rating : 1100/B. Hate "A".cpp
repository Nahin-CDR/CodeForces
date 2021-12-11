//Author : Nahin
//Date : 11-12-2021

#include<iostream>
using namespace std;

int main()
{
    
     string str,a,b;
     cin >> str;
     for(int i = 0; i <str.length(); i++)
     {
           a += str[i];
           if(str[i] != 'a') b += str[i];
           if(a.length()+b.length() == str.length()) break;
     }
     if(str == a+b) cout<<a<<endl;
     else cout<<":("<<endl;
     return 0;
}
