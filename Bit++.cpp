#include<iostream>
using namespace std;

//Solver : Nahin the coder
//Date   : 01-02-2020

int main()
{
    string  ab = "X++";
    string  bc = "++X";
    string  cd = "X--";
    string  de = "--X";

    int counter;
    cin>>counter;
    int x=0;
    while(counter--)
    {
        string input;
        cin>>input;
        if(input==ab)
        {
            x++;
        }
        else if(input==bc)
        {
            ++x;
        }
        else if(input == cd)
        {
            x--;
        }
        else if(input == de)
        {
            --x;
        }
    }

    cout<<x<<endl;

    return 0;
}
