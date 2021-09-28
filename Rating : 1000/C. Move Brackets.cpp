//Solver : Nahin the Coder
//Date  :  28-09-2021


#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
string str;
ll n;

bool isExist(ll index,char ch){
    if(ch == '('){
        //we will search for closing bracket
        for(ll i = index; i<n; i++){
            if(str[i]==')'){
                str[i] = '0';
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
    ll test;cin>>test;
    while(test--){
        cin>>n;
        cin>>str;
        ll cnt1 = 0;
        //checking max opening  
        for(ll i=0; i<n; i++){
            if(str[i]=='(')
            {
                ll next = i+1;
                //search for closing bracket
                bool exist = isExist(next,str[i]);
                if(!exist){
                    cnt1++;
                }
            }
        }
        cout<<cnt1<<endl;
    }
    return 0;
}
