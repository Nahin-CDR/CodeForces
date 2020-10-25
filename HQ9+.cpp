#include<bits/stdc++.h>

//Solver : Nahin the coder
//Date   : 26-02-2020
//Time   : 12:24 pm

using namespace std;

int main()
{



   string first;

   cin>>first;
   int size;

   size = first.size() + 1;


   char firstArray[size];

   strcpy(firstArray,first.c_str());//.c_str()

   bool state = false;
   for(int i = 0; i<size; i++)
   {
        if(firstArray[i]=='H')
        {
            state = true;
            break;
        }
        else if(firstArray[i]=='Q')
        {
            state = true;
            break;
        }
        else if (firstArray[i]=='9')
        {
            state = true;
            break;
        }
   }
    if(state)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
