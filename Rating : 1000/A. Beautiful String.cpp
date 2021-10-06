//Solver : Nahin the coder
//Date : 05-10-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long; 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
  
    int test;
    cin>>test;
    while(test--)
    {
        string s;
        cin>>s; 
        size_t found_aa = s.find("aa");
        size_t found_bb = s.find("bb");
        size_t found_cc = s.find("cc");
        if(found_aa != string::npos)
        {
            cout<<-1<<endl;
            continue;
        }
        if(found_bb != string::npos)
        {
            cout<<-1<<endl;
            continue;
        }
        if(found_cc != string::npos)
        {
            cout<<-1<<endl;
            continue;
        }
       
        if(s.length() == 1)
        {
            if(s[0] == '?')
            {
                cout<<'a'<<endl;
            }
            else
            {
                cout<<s<<endl;
            }
            continue;
        }
        if(s.length() == 2)
        {
            if(s[0]== '?')
            {
                if(s[1] == '?')
                {
                    cout<<"ab"<<endl;
                }
                else if(s[1] == 'b')
                {
                    cout<<"ab"<<endl;
                }
                else if(s[1] == 'c')
                {
                    cout<<"ac"<<endl;
                }
                else if(s[1] == 'a')
                {
                    cout<<"ba"<<endl;
                }
            }
            else if(s[1] == '?')
            {
                if(s[0] == '?')
                {
                    cout<<"ab"<<endl;
                }
                else if(s[0] == 'b')
                {
                    cout<<"ba"<<endl;
                }
                else if(s[0] == 'c')
                {
                    cout<<"ca"<<endl;
                }
                else if(s[0] == 'a')
                {
                    cout<<"ab"<<endl;
                }
            }
            else
            {
                cout<<s<<endl;
            }
            continue;
        }

        for(int i=0; i<s.length(); i++)
        {
            if(i==0 and s[i] == '?')
            {
                if(s[i+1] == '?')
                {
                    s[i] = 'a';
                }
                else
                {
                    if(s[i+1] == 'a')
                    {
                        s[i] = 'b';
                    }
                    else if(s[i+1] == 'b')
                    {
                        s[i] = 'a';
                    }
                    else
                    {
                        s[i] = 'a';
                    }
                }
            }
            else
            {
                if(s[i] == '?')
                {
                    if(i==s.length()-1) // if it is last character then
                    {
                        if(s[i-1] == 'a')
                        {
                            s[i] = 'b';
                        }
                        else if(s[i-1] == 'b')
                        {
                            s[i] = 'a';
                        }
                        else
                        {
                            s[i] = 'a';
                        }
                    }
                    else if(s[i+1]=='?')
                    {
                        if(s[i-1] == 'a')
                        {
                            s[i] = 'b';
                        }
                        else if(s[i-1] == 'b')
                        {
                            s[i] = 'a';
                        }
                        else
                        {
                            s[i] = 'a';
                        }
                    }
                    else
                    {
                        if(s[i-1] == 'a' and s[i+1] == 'b')
                        {
                            s[i] = 'c';
                        }
                        else if(s[i-1] == 'b' and s[i+1] == 'a')
                        {
                            s[i] = 'c';
                        }
                        else if(s[i-1] == 'a' and s[i+1] == 'c')
                        {
                            s[i] = 'b';
                        }
                        else if(s[i-1] == 'c' and s[i+1] == 'a')
                        {
                            s[i] = 'b';
                        }
                        else if(s[i-1] == 'b' and s[i+1] == 'c')
                        {
                            s[i] = 'a';
                        }
                        else if(s[i-1] == 'c' and s[i+1] == 'b')
                        {
                            s[i] = 'a';
                        }
                        else if(s[i-1] == 'b' and s[i+1] == 'b')
                        {
                            s[i] = 'c';
                        }
                        else if(s[i-1] == 'c' and s[i+1] == 'c')
                        {
                            s[i] = 'b';
                        }
                        else if(s[i-1] == 'a' and s[i+1] == 'a')
                        {
                            s[i] = 'c';
                        }
                    }
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
