//Solver : Nahin the Coder
//Date   : 02-08-2021
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        if(n/2020 >= n%2020)
        {
            cout<<"YeS"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
