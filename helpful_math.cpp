#include <bits/stdc++.h>

//Solver : Nahin the Coder
//Date   : 11-02-2020
using namespace std;

int main() {
    string ab;
    cin>>ab;
    int size = ab.size()+1;
    char charArray[size];
    strcpy(charArray,ab.c_str());
    int counter = 0;

    int arr[size];

    for(int i = 0; i<size; i++)
    {
        if(charArray[i]==(int)charArray[i])
        {

            arr[counter]=charArray[i]-'0';
            counter++;

        }
    }
    int newArr[counter];
    int count=0;
    for(int i=0; i<counter; i++)
    {
        if(arr[i]>0)
        {
            newArr[count]=arr[i];
            count++;
        }
    }

    int smaller;

    for(int i=0; i<count-1; i++)
    {
        for(int j=i+1; j<count; j++)
        {
            if(newArr[i]>newArr[j])
            {
                smaller=newArr[j];
                newArr[j]=newArr[i];
                newArr[i]=smaller;
            }
        }
    }

    int endline=0;
    for(int i=0; i<count; i++)
    {

        if(count-1==endline)
        {
            cout<<newArr[i]<<endl;
        }
        else
        {
            cout<<newArr[i]<<"+";
        }

        endline++;
    }

    return 0;
}
