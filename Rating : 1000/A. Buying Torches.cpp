#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{

  ll x,y,k,test;
  cin>>test;
  while(test--){
    
    cin>>x>>y>>k;
    
    cout<<(k*(y+1)+x-3)/(x-1)+k<<endl;
  }


  return 0;
}
