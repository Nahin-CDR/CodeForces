//Author : Nahin the Coder
//Date : 23-12-2021


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test; cin>>test;
    while(test--)
    {
        int n; cin>>n;
        int arr[n];
        
        vector<int>sorted;

        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sorted.push_back(arr[i]);
        }
        sort(sorted.begin(),sorted.end());

        vector<pair<int,int>>ans;

        for(int i=sorted.size()-1; i>=0; i--)
        {
            int current;
            for(int j=0; j<n; j++)
            {
                if(sorted[i] == arr[j])
                {
                    current = j;
                    break;
                }
            }
            if(i == current)
            {
                continue;
            }
            
            ans.push_back(make_pair(current+1,i+1));

            int temp = arr[current];
            for(int k=current; k<i; k++)
            {
                arr[k] = arr[k+1];
            }
            arr[i]=temp;
        }
        cout<<ans.size()<<endl;
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i].first<<" "<<ans[i].second<<" "<<1<<endl;
        }
    }
    return 0;
}
