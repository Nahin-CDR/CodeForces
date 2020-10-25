#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin The Coder
//Date   : 23-04-2020
//Time   : 03:36 pm

int main()
{
    string str;
    cin>>str;

    int size;
    size = str.length();
    int counter=0;
    for(int i=0; i<size; i++)
    {
        if(str[i]=='4' || str[i]=='7')
        {
            counter++;
        }
        else
        {
            counter--;
        }

    }
    if((counter==size && size==4) || (counter==size && size==7) )
    {
        cout<<"YES"<<endl;
    }
    else
        {
            int size = str.size() +1;
            char arr[size];
            strcpy(arr,str.c_str());
            int counter = 0;
            for(int i = 0; i<size; i++)
            {
                if(arr[i] == '4')
                {
                    counter++;
                }
                if(arr[i] == '7')
                {
                    counter++;
                }
            }

            if(counter==4 || counter==7)
            {
                //stringstream geek(str);
                //long long int x = 0;
                //geek >> x;
                //if(x%4==0 || x%7==0)
                //{
                    cout<<"YES"<<endl;
                //}
                //else
                //{
                 //   cout<<"NO"<<endl;
                //}
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    return 0;
}
