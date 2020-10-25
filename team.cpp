#include<bits/stdc++.h>

//Solver : Nahin
//Date   : 22-01-2020
//Time   : 09:59 pm
using namespace std;

int main()
{
    int testcase;

    cin>>testcase;
    
    int arr[3];

    int counter;
    int final_count = 0;

    while(testcase--)
    {
        counter = 0;

        for(int i=0; i<3; i++)
        {
            cin>>arr[i];
        }
        for(int j = 0; j<3; j++)
        {
            if(arr[j]==1)
            {
                counter++;
            }
        }
        if(counter>=2)
        {
            final_count++;
        }
    }

    cout<<final_count<<endl;

    return 0;
}
