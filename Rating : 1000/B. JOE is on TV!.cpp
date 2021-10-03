//Solver : Nahin the coder
//Date : 03-10-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long; 


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    double total = 0;
    double n; cin>>n;
    if(n==1)
    {
        cout<<fixed<<setprecision(12)<<1<<endl;
    }
    else
    {
        for(double i=n; i>=2; i--)
        {
            total = total + 1/i;
        }
        cout<<fixed<<setprecision(12)<<total+1<<endl; 
    }
    
    return 0;
}
