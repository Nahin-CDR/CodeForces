//Author : Nahin the Coder
//Date : 21-03-2022

#include<bits/stdc++.h>
using namespace std;


void display(int n,int k)
{
    int res = n*k;
    int cnt = 1;
    vector<int>odd;
    vector<int>even;
    while(cnt <= res)
    {
        if(cnt%2 != 0)
        {
            odd.push_back(cnt);
        }
        else
        {
            even.push_back(cnt);
        }

        cnt++;
    }
    int odd_Limit = odd.size();
    int even_Limit = even.size();
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<k; j++)
        {
            if(cnt1<odd_Limit)
            {
                cout<<odd[cnt1++]<<" ";
            }
            else
            {
                cout<<even[cnt2++]<<" ";
            }
        }
        cout<<"\n";
    }
}



int main()
{
    





    int test; cin>>test;
    while(test--)
    {
        int n,k;
        cin>>n>>k;
        if(k == 1)
        {
            cout<<"YES"<<endl;
            int cnt = 1;
            while(cnt <= n)
            {
                cout<<cnt<<"\n";
                cnt++;
            }
        }
        else
        {
            if(k%2 != 0 and n%2 != 0)
            {
                cout<<"NO"<<endl;
            }
            else if(n%2 == 0 and k%2 != 0) //n even k odd hoile hobe
            {
                cout<<"YES"<<endl;
                display(n,k);
            }
            else if(n%2 == 0 and k%2 == 0)
            {
                cout<<"YES"<<endl;
                display(n,k);
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
