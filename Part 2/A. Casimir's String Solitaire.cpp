//Solver : Nahin the Coder
//Date  :  28-09-2021


#include<bits/stdc++.h>
using namespace std; 




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int test;cin>>test;
    while(test--){
        string s;
        cin>>s;
        int a = 0;
        int b = 0;
        int c = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'A')
            {
                a++;
            }
            if(s[i]=='B'){
                b++;
            }
            if(s[i]=='C')
            {
                c++;
            }
        }

       if(b==a+c)
       {
           cout<<"YES"<<endl;
       }else{
           cout<<"NO"<<endl;
       }


    }
    return 0;
}
