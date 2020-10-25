#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the coder
//Date   : 21-02-2020


int main()
{
    string name;
    cin>>name;
    int size;
    size = name.size();
    if(size==1)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
    int finalCount = size;

    for(int i=0; i<size; i++)
    {
        int count = 0;
        char a = name[i];

        for(int j=i+1; j<size; j++)
        {

            if(a==name[j])
            {
                count++;
            }

        }
        if(count>0)
        {
            finalCount--;
            count = 0;
        }
        else
        {
            count = 0;
        }

    }

    if(finalCount%2 !=0)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    else
    {
        cout<<"CHAT WITH HER!"<<endl;
    }

    }

    return 0;
}
