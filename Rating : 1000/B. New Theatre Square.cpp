//Solver : Nahin the Coder
//Date  :  29-09-2021

#include<bits/stdc++.h>
using namespace std; 
using ll = long long;


int main()
{
    ll test; cin>>test;
    while(test--){
        ll m,n,x,y;
        cin>>m>>n>>x>>y;  
        ll dot = 0;
        char arr[m][n];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin>>arr[i][j];
                if(arr[i][j] == '.'){
                    dot++;
                }
            }
        }
        ll dbl = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n-1; j++){
                if(arr[i][j] == '.' and arr[i][j+1]=='.'){
                    dbl++;
                    arr[i][j] = '0';
                    arr[i][j+1] = '0';
                }
            }
        }
        ll res1 = dot*x;
        ll res2 = dbl*y;
        ll res3 = 0;
        if(res2>0){
            res3 = dot - dbl*2;
            ll result = min(res1,res3*x+res2);
            cout<<result<<endl;
        }else{
            cout<<res1<<endl;
        }
    }
    return 0;
}
 

