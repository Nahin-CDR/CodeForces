#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 21-02-2020 [ 10:54pm ]

int main()
{
    int testcase;
    cin>>testcase;
    int arr[3];

    int firstStorage = 0;
    int secondStorage = 0;
    int thirdStorage = 0;


    int storage = 0;
    while (testcase--)
    {
        for(int i=0; i<3; i++)
        {
            cin>>arr[i];
            storage = storage + arr[i];
        }
        for(int i=0; i<3; i++)
        {
            storage = storage + arr[i];
            if (i==0)
            {
                firstStorage = firstStorage + arr[i];
            }
            else if(i==1)
            {
                secondStorage = secondStorage + arr[i];
            }
            else if(i==2)
            {
                thirdStorage = thirdStorage + arr[i];
            }
            
        }
    }

    int coloumns = 1;
  
    if(firstStorage==0 && secondStorage == 0)
    {
        if(thirdStorage == 0)
        {
            coloumns--;
        }
    }


    if(storage==0 && coloumns==0)
    {
        cout<<"YES"<<endl;
    }   
    else
    {
        cout<<"NO"<<endl;
    }
    


    return 0;
}
