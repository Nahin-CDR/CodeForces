//Solver : Nahin the Coder
//Date  :  29-09-2021


#include<bits/stdc++.h>
using namespace std; 
using ll = long long;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll test;cin>>test;
    while(test--){
    ll a,b,c;
    cin>>a>>b>>c;
    if(a<c){
        cout<<1<<" ";
    }else{
        cout<<-1<<" ";
    }
    if(a*b>c){
        cout<<b<<endl;
    }else{
        cout<<-1<<endl;
    }
}
    return 0;
}
