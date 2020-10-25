#include<bits/stdc++.h>
//Solver : Nahin
//Date   : 06-01-2020
//Time   : 08:39 pm
using namespace std;
 
int main()
{
    int testcase;
    cin>>testcase;
    while(testcase--)
    {
        string ab;
        cin>>ab;
        int len = ab.size();
        int last = len - 1;
        if(len>10)
        {
            cout<<ab[0]<<len-2<<ab[last]<<endl;
        }
        else
        {
            cout<<ab<<endl;
        }
        
    }
 
    return 0;
}
