//Solver : Nahin the coder
//Date : 02-10-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long; 


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    ll test;
    cin>>test;  
    while(test--)
    {
        ll m,n;
        cin>>m>>n; 
        char b = 'B';
        char w = 'W';
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(i == 1 and j == 1){
                    cout<<w;
                }
                else{
                    cout<<b;
                    
                }
            }
            cout<<endl;
        }


    }
    return 0;
}
