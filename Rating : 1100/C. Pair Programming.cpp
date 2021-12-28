//Author : Nahin - CDR
//Date : 27-12-2021

#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test;
    cin>>test;
    while(test--)
    {
        int k,n,m;
        cin>>k>>n>>m;
        int a[n];
        int b[m];

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        } 
        for(int i=0; i<m; i++)
        {
            cin>>b[i];
        }
        
        int pos1 = 0;
        int pos2 = 0;
        
        vector<int>answer;
        bool yes = true;
        while(pos1 != n or pos2 != m)
        {
            if(a[pos1] == 0 and pos1 != n)
            {
                answer.push_back(0);
                k++;
                pos1++;
            }
            else if(b[pos2] == 0 and pos2 != m)
            {
                answer.push_back(0); 
                pos2++;
                k++;
            }
            else if(a[pos1]<=k and pos1 != n)
            {
                answer.push_back(a[pos1]);
                pos1++;
            }
            else if(b[pos2]<=k and pos2 != m)
            {
                answer.push_back(b[pos2]);
                pos2++;
            }
            else
            {
                yes = false;
                break;
            }
        }
        
        if(!yes)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(int i=0; i<answer.size(); i++)
            {
                cout<<answer[i]<<" ";
            }
            cout<<"\n";
        }
      
    }
    return 0;
}
