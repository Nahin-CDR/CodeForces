#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int test;
    cin>>test;
    while(test--)
    {
        int n; cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(n <= 2)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            int f = arr[0];
            int s = arr[1];
            bool ans = true;
            
            if(f%2 == 0 and s%2 != 0)
            {
                for(int i=0; i<n; i++)
                {
                    if((i+1)%2 != 0 and arr[i]%2 != 0)
                    {
                        ans = false;
                    }    
                    if((i+1)%2 == 0 and arr[i]%2==0)
                    {
                        ans = false;
                    } 
                
                }
            }
            else if(f%2 != 0 and s%2 == 0)
            {
                for(int i=0; i<n; i++)
                {
                    if((i+1)%2 != 0 and arr[i]%2== 0)
                    {
                        ans = false;
                    }    
                    if((i+1)%2 == 0 and arr[i]%2!=0)
                    {
                        ans = false;
                    }
                }
            }
            else if(f%2 == 0 and s%2 == 0)
            {
                for(int i=0; i<n; i++)
                {
                    if(arr[i]%2 != 0)
                    {
                        ans = false;
                    }
                }
            }
            else
            {
                for(int i=0; i<n; i++)
                {
                    if(arr[i]%2 == 0)
                    {
                        ans = false;
                    }
                }
            }
            
            
            if(ans == true)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
            
            
            
            
        }
    }
    return 0;
}
