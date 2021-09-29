#include "vector"
#include "iostream"
#include "algorithm"
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);

  int q; cin>>q; while(q--){
    long long a, b, moves=0;
    cin >> a >> b;
    if(a > b) swap(a, b);
    while(a < b){
        
        if(a<<3 <= b){
            //cout<<a<<"\n";
            a <<= 3;
            //cout<<a<<"\n";
            moves++;
        
        }else if(a<<2 <= b){
            //cout<<a<<"\n";
            a<<= 2;
            //cout<<a<<"\n";
            moves++;
        
        }else if(a<<1 <= b){
            //cout<<a<<"\n";
            a <<= 1;
           // cout<<a<<"\n";
            moves++;
        
        }else{
            
            break;
        }
    }
    cout << (a==b ? moves : -1) <<'\n';
  }
  return 0;
}
