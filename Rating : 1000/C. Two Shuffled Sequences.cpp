//Author : Nahin the Coder
//Date : 05-11-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);


    map<int,int>mp;
    int n; cin>>n;
    int arr[n];
    bool yes = true;
    bool split = false;
    vector<int>vc;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        ++mp[arr[i]];
        if(mp[arr[i]] >= 3)
        {
            yes = false;
        }
        if(mp[arr[i]] == 2)
        {
            split = true;
            vc.push_back(arr[i]);
        }
    }
    if(yes == false)
    {
        cout<<"NO"<<endl;
    }
    else if(split == false)
    {
        cout<<"YES"<<endl;
        cout<<0<<"\n";
        cout<<"\n";
        cout<<n<<endl;
        sort(arr,arr+n);
        for(int i=n-1; i>=0; i--)
        {
            cout<<arr[i]<<" ";
        }
    }
    else
    {
        cout<<"YES"<<endl;

        sort(vc.begin(),vc.end());
        sort(arr,arr+n);
        
        cout<<vc.size()<<endl;
        for(int i=0; i<vc.size(); i++)
        {
            cout<<vc[i]<<" ";
        }
        cout<<"\n";
        cout<<n-vc.size()<<endl;
        int prev; 
        for(int i=n-1; i>=0; i--)
        {
            if(i==n-1)
            {
                cout<<arr[i]<<" ";
                prev = arr[i];
            }
            else
            {
                if(arr[i] == prev)
                {
                    continue;
                }
                else
                {
                    cout<<arr[i]<<" ";
                    prev = arr[i];
                }
            }
        }
    }
    return 0;
}
