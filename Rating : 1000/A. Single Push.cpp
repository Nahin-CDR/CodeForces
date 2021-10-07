//Solver : Nahin the coder
//Date : 07-10-2021

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
        int n;
        cin>>n;
        int arr_1[n];
        int arr_2[n];
        
        for(int i=0; i<n; i++)
        {
            cin>>arr_1[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>arr_2[i];
        }
  
        int diff = 0;
        int index;
        int minusCounter = 0;
        bool ans = true;
        for(int i=0; i<n; i++)
        {
            if(arr_1[i]<arr_2[i] and diff == 0)
            {
                diff = arr_2[i] - arr_1[i];
                index = i;
            }
            else if(arr_1[i]<arr_2[i] and diff != 0)
            {
                if(arr_2[i]-arr_1[i] != diff)
                {
                    ans = false;
                    break;
                }
                else
                {
                    if(abs(i-index) != 1)
                    {
                        ans = false;
                        break;
                    }
                    else
                    {
                        index = i;
                    }
                }
            }
            else if(arr_1[i]>arr_2[i])
            {
                ans = false;
            }
            else
            {
                //do nothing , because both of them are same
            }
        }
        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }



    }
    return 0;
}
