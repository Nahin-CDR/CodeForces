#include<bits/stdc++.h>

//Solver : Nahin
//Date   : 08-02-2020
//Time   : 09:06 pm

using namespace std;

int main()
{
    
    string myString;
    cin>>myString;
    int size;
    size=myString.size()+1;
    char charArray[size];

    bool a=false;
    int count1=0;
    int count0=0;


    strcpy(charArray,myString.c_str());
    
    for(int i=0; i<size; i++)
    {
        if(charArray[i]=='1')
        {
            count1++;
            if(count1==7)
            {
                a=true;
            }
            if(charArray[i+1]!='1')
            {
                count1=0;
            }
        }

        if(charArray[i]=='0')
        {
            count0++;
            if(count0==7)
            {
                a=true;
            }
            if(charArray[i+1]!='0')
            {
                count0=0;
            }
        }
    }

    if(a)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;

}
