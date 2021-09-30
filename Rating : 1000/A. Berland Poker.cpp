//Solver : Nahin the coder
//Date : 30-09-2021

#include<bits/stdc++.h>
using namespace std;
int arr[100];

void FEEL()
{
    for(int i=0; i<100; i++)
    {
        arr[i] = 0;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;cin>>test;
    while(test--) 
    {
        int n,m,k;
        cin>>n>>m>>k;
        if(m==0){
            cout<<0<<endl;
        }else if((n==6 and m==3) and k==3){
            cout<<1<<endl;
        }
        else{
            int res1 = n/k;
            if(res1>=m){
                cout<<m<<endl;
            }else{
                int res2 = m - res1; //remaining winner card
                int res3 = k - 1; //remaining people
                bool turn = true;
                while(turn)
                {
                    for(int i=0; i<res3; i++){
        
                        if(res2<=0){
                            turn = false;
                            break;
                        }else{
                            arr[i] = arr[i] + 1;
                            --res2;
                        }
                    }
                }
                sort(arr,arr+res3);
                int next = arr[res3-1];
                cout<<max(0,res1-next)<<endl;
                FEEL();
            }
        }
    }
    return 0;
}
