//Solver : Nahin the coder
//Date : 02-10-2021

#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    
    int test;
    cin>>test;  
    while(test--){
        vector<int>vc;
        int n;
        cin>>n; 
        for(int i=0; i<n; i++)
        {
            int k; 
            cin>>k; vc.push_back(k); 
        }

        int ans = 0;
        sort(vc.begin(),vc.end()); 
        for(int i=n-1; i>=0; i--){
            if(vc[i] <= i+1){
                ans = i+2;
                break;
            }
        }
        if(ans>0){
            cout<<ans<<endl; 
        }else{
            cout<<1<<endl;
        }
    }
    return 0;
}
