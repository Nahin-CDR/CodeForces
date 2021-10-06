//Solver : Nahin the coder
//Date : 06-10-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long; 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
  
    int test;
    cin>>test;
    while(test--)
    {
        ll coinA,coinB,valueA,S;
        cin>>coinA>>coinB>>valueA>>S;

        if(valueA>S and coinB<S)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(valueA == S)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(valueA*coinA == S)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(coinB >= S)
        {
            cout<<"YES"<<endl;
            continue;
        }
        
        ll res1 = S/valueA;
        ll res2 = S%valueA;
        if(res2 == 0 and coinA>=res1)
        {
            cout<<"YES"<<endl;  
        }
        else if(res2 == 0 and coinA<res1)
        {
            ll res3 = coinA*valueA;
            ll res4 = S - res3;
            if(res4 <= coinB )
            {
               cout<<"YES"<<endl;
            }
            else
            {
               cout<<"NO"<<endl;
            }
        }
        else if(res2!=0)
        {
            if(res1>coinA)
            {
               ll res5 = coinA*valueA;
               ll res6 = S - res5;
               if(res6 <= coinB)
               {
                  cout<<"YES"<<endl;
               }
               else
               {
                  cout<<"NO"<<endl;
               }
            }
            else
            {
               ll res7 = res1*valueA;
               ll res8 = S-res7;
               if(res8<=coinB)
               {
                  cout<<"YES"<<endl;
               }
               else
               {
                  cout<<"NO"<<endl;
               }
            }
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
