#include<iostream>
using namespace std;

// Solver : Nahin the Coder
// Date   : 01-04-2020
//Time    : 08:53 pm

int main()
{
    bool exit = true;
    int a,b;
    cin>>a>>b;
    
    int year = 0;
   

    while(exit)
    {
        a = a*3;
        b = b*2;
        year++;
        if(a>b)
        {
            exit = false ;
        } 
    }

    cout<<year<<endl;

    return 0;
}

