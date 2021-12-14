//Solver : Nahin the Coder
//Date : 14-12-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll test; cin>>test; 
    while(test--)
    {
        int n; cin>>n; 
        for(int i=2; i<=n+1; i++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }


    return 0;
}
