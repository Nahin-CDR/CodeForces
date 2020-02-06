#include<iostream>

//Solver : Nahin thE Coder
//Date   : 01-01-2020
//Time   : 03:47pm

using namespace std;
int main()
{
    int w;
    cin>>w;
    int check = 1;
    if(w>=4)
    {
    int first,second;
    first = 1;
    second = w-1;
    int store = w;

        for(int j = 1; j<=w; j++)
        {

           if(first%2==0 && second%2==0)
           {
               if(first+second == store)
               {
                   cout<<"YES"<<endl;
                   check--;
                   goto level;
               }
           }
           first++;
           second--;

        }
    }
    level:
    if(check)
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
