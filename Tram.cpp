#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 11-03-2020
//Time   : 09:47 am

int main()
{
    int testcase;
   
    int firstcounter = 0;
    int lastcounter = 0;
  
    cin>>testcase;
    
    int size=testcase;
  
    int hi[size];

    int last[size];
    int first[size];

    while(testcase--)
    {
        int a,b;
        cin>>a>>b;

        first[firstcounter++]=a;
        last[lastcounter++]=b;



    }

    if(size>1)
    {

    hi[0] = first[0] + last[0];
    
    for(int i=1; i<size; i++)
    {
        hi[i] = ( hi[i-1] - first[i] ) + last[i];
    }

    int highest = hi[0];
    for(int i=0; i<size; i++)
    {
        if(highest<hi[i])
        {
            highest=hi[i];
        }

    }

    cout<<highest<<endl;
    }
    else
    {
        cout<<last[0]<<endl;
    }
    

    return 0;
}
