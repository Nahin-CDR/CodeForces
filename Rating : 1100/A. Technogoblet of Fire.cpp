//Author : Nahin the Coder
//Date : 26-12-2021

#include<bits/stdc++.h>
using namespace std;


int power[500];
int school[500];
int wants[500];


bool isExist(int need,int n)
{
    int selected = power[need];
    int fixed = school[need];

    for(int i=0; i<n; i++)
    {
        if(i == need)
        {
            continue;
        }
        else
        {
            if(school[i] == fixed and power[i]>selected)
            {
                return true;
            }
        }
    }
    
    return false;
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n,m,k;
    
    cin>>n>>m>>k;

    

    //taking input for powers
    for(int i=0; i<n; i++)
    {
        cin>>power[i];
    }

    //taking input for school
    for(int i=0; i<n; i++)
    {
        cin>>school[i];
    }

    //taking input for wanted people

    int counter = 0;
    for(int i=0; i<k; i++)
    {
        int need; cin>>need;
        bool exist = isExist(need-1,n);
        if(exist == true)
        {
            counter++;
        }
    }
    
    cout<<counter<<endl;

    return 0;

}
