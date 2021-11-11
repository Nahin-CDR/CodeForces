//Author : Nahin the Coder
//Date : 11-11-2021



#include<bits/stdc++.h>
using namespace std;


void Solve()
{
    int h1,h2;
    int m1,m2;
    char c1,c2;

    cin>>h1>>c1>>m1;
    cin>>h2>>c2>>m2;
    
    int res1 = h1*60 + m1;
    int res2 = h2*60 + m2;
    int h = (((res1+res2)/2)/60);
    int m = (((res1+res2)/2)%60);
    
    if(h>=10) cout<<h;
    else cout<<0<<h;
    cout<<":";
    if(m>=10) cout<<m<<endl;
    else cout<<0<<m<<endl;
   
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int test = 1;
    while(test--)
    {
        Solve();
    }

    return 0;
}
