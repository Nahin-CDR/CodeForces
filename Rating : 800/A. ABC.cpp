//Author : Nahin the Coder
//Date : 03-02-2022

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);   
    
    int test; cin>>test;
    while(test--)
    {
       int len;    cin>>len;
       string str; cin>>str;
       
       if(len == 1)
       {
           cout<<"YES"<<endl;
       }
       else if(len == 2)
       {
           if(str[0] != str[1])
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
       }
       else
       {
           string temp = str;
           reverse(temp.begin(),temp.end());


           bool check = true;

           if(temp == str)
           {
               cout<<"NO"<<endl;
           }
           else
           {
               for(int k=0; k<len; k++)
               {
                    for(int i=k; i<len; i++)
                    {
                        string temp1 = "";
                        string temp2;
                        for(int j=k; j<i+1; j++)
                        {
                            temp1 += str[j];
                            //cout<<str[j]<<" ";
                        }
                        temp2 = temp1;
                        reverse(temp2.begin(),temp2.end());
                        if(temp1 == temp2 and temp1.length()>1)
                        {
                            check = false;
                            goto level;
                        }
                   
                    }
               
                }
            level:
                if(check == true)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
           }
       }
    }
   

	return 0;
}
