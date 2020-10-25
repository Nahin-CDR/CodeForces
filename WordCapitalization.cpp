#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 17-02-2020


int main()
{
    string ab;
    cin>>ab;
    transform(ab.begin(),ab.begin()+1,ab.begin(),::toupper);
    cout<<ab;
    return 0;
}


