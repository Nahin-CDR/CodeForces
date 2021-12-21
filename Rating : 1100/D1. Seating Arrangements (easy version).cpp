//Author : Nahin -CDR
//Date : 21-12-2021

#include<bits/stdc++.h>
using namespace std;



vector<int>vc;

int Smaller(int item,int limit) {

    int count = 0;
    for(int i=0; i<=limit; i++) {
        if(item > vc[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int test; cin>>test;
    while(test--)
    {
        int n,m; cin>>n>>m;
        for(int i=0; i<m; i++)
        {
            int k; cin>>k;
            vc.push_back(k);
        }
        int cnt = 0;
        for(int i=0; i<m; i++)
        {
            int check = Smaller(vc[i],i);
            cnt = cnt+check;
        }
        cout<<cnt<<endl;
        vc.clear();
        
    }
    return 0;
}
