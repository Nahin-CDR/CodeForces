//Solver : Nahin the Coder
//Date  :  27-09-2021


#include<bits/stdc++.h>
using namespace std; 
using ll = long long;
int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);


    ll test; cin>>test;
    while(test--){
        ll r,g,b,w;
        cin>>r>>g>>b>>w;
        if((r%2==0 and g%2==0) and b%2==0){ //w 
            cout<<"YES"<<endl;
        }else if((r%2==0 and g%2==0) and w%2==0){ //b
            cout<<"YES"<<endl;
        }else if((r%2==0 and b%2==0) and w%2==0){ //g
            cout<<"YES"<<endl;
        }else if((b%2==0 and w%2==0) and g%2==0){ //r
            cout<<"YES"<<endl;
        }else{
            if(r==0 or g==0 or b==0){
                cout<<"NO"<<endl;
            }else{
                bool turn = true;
                ll cp = 0;
                while(turn){
                    if(cp>1000){
                        cout<<"NO"<<endl;
                        turn = false;  
                        break;
                    }
                    if(r>0){
                        --r;
                    }
                    if(g>0){
                        --g;
                    }
                    if(b>0){
                        --b;
                    }
                    w = w+3;
                    if((r%2==0 and g%2==0) and b%2==0){//w
                        cout<<"YES"<<endl;
                        turn = false;
                    }else if((r%2==0 and g%2==0) and w%2==0){//b
                        cout<<"YES"<<endl;
                        turn = false;
                    }else if((w%2==0 and g%2==0) and b%2==0){//r
                        cout<<"YES"<<endl;
                        turn = false;
                    }else if((r%2==0 and w%2==0) and b%2==0){//g
                        cout<<"YES"<<endl;
                        turn = false;
                    }else{
                        if(r==0 or g==0 or b==0){
                            cout<<"NO"<<endl;
                            turn = false; 
                        }
                    }
                    ++cp;
                    
                   
                    
                }
            }
        }

    }






    return 0;
}
