//Solver : Nahin the coder
//Date : 08-10-2021

#include<bits/stdc++.h>
using namespace std;

int vc[501];

void Check(char ch,int len,string str)
{
    for(int i=0; i<501; i++)
    {
        vc[i] = 0;
    }
    int cnt = 0;
    int k =0;
    for(int i=0; i<len; i++)
    {
        if(ch == str[i] )
        {
            ++cnt;
        }
        else
        {
            vc[k++] = cnt;
            cnt = 0;
        }
    }
    if(cnt>0)
    {
        vc[k] = cnt;
    }
}




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int test;
    cin>>test;

    while(test--){
        string str;
        cin>>str;
       
        int len = str.length();
        if(len==1)
        {
            cout<<str<<endl;
            continue;
        }
        if(len == 2)
        {
            if(str[0] != str[1])
            {
                sort(str.begin(), str.end());
                cout<<str<<endl;
                continue;
            }
            else
            {
                cout<<" "<<endl;
                continue;
            }
           
        }
        map<char,int>mp;
        for(int i=0; i<len; i++)
        {
            ++mp[str[i]];
        }
        map<char,int>res;
        for(auto it:mp)
        {
            char ch = it.first; 
            Check(ch,len,str);
            for(int i = 0; i<501; i++)
            {
                if(vc[i]%2!=0)
                {
                    ++res[ch];
                    break;
                }
            }
        }
        if(res.size()>0)
        {
            for(auto it:res)
            {
                cout<<it.first;
            }
            cout<<endl;        
        }
        else
        {
            cout<<" "<<endl;
        }
    }
    return 0;
}
