//Solver : Nahin the coder
//Date  : 28-10-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    map<int,int>mp;

    for(int i=0; i<n; i++)
    {
        int k; cin>>k;
        ++mp[k];
    }    
    int limit = (n+1)/2;
    vector<int>vc;
    for(auto it:mp)
    {
        int k = it.second;
        vc.push_back(k);
    }
    
    sort(vc.begin(),vc.end(),greater<>());
    int student = 0;
    int rem = 0;
    for(int i=0; i<vc.size(); i++)
    {
     
        int res1 = vc[i]/2;
        int res2 = vc[i]%2;
        student = student + res1*2;
        rem = rem + res2;
    }
   
    cout<<student+((rem+1)/2)<<endl;

  



    return 0;
}
