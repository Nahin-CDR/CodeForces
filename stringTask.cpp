#include <bits/stdc++.h>

//Solver : Nahin
//Date   :14-01-2020
//Time   :08:53 pm

using namespace std;

void eraseDemo(string str)
{
    int size;

    size = str.length();

    int counter = 100 ;
    while(counter--)
    {
        for(int i=0; i<size; i++)
       {
            if(str[i]=='a' || str[i]=='u' || str[i]=='o' || str[i]=='i' || str[i]=='e' || str[i]=='y' )
            {
                str.erase(i, 1);
            }
       }

       size = str.length();

    }

    int newSize;
    newSize = str.length();



    for(int i=0; i<newSize; i++)
    {
        cout<<"."<<str[i];
        if(i==newSize-1)
        {
            cout<<endl;
        }
    }

}


int main()
{

    
    string str;
    cin>>str;

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    eraseDemo(str);
    
    return 0;

}
