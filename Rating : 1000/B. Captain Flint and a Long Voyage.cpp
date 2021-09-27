//Solver : Nahin the Coder
//Date  :  27-09-2021


#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        if(n == 1){
            cout<<8<<endl;
        }else{
            if(n%4 != 0){
                ll x = n/4+1; 
                ll nine = n-x;
                for(int i=1; i<=nine; i++){
                    cout<<9;
                }  
                for(int i=1; i<=x; i++){
                    cout<<8;
                }
                cout<<"\n";
            }else{
                ll x = n/4; 
                ll nine = n-x;
                for(int i=1; i<=nine; i++){
                    cout<<9;
                }  
                for(int i=1; i<=x; i++){
                    cout<<8;
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}
