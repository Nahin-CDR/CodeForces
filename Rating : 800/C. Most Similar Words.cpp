//Solver : Nahin the Coder
#include<bits/stdc++.h>
using namespace std;

int diff(string st1, string st2, int len)
{
    int res = 0;
    for(int i=0; i<len; i++)
    {
        res += abs(st1[i]-st2[i]);
    }
    return res;
}


int main()
{
    int test; cin>>test;
    while(test--)
    {
        int n,len;
        cin>>n>>len;
        vector<string>vc;
        for(int i=0; i<n; i++)
        {
            string st; cin>>st;
            vc.push_back(st);
        }
        
        int min_ans = INT_MAX;
        for(int i=0; i<n; i++)
        {
            string st1 = vc[i];
            for(int j=0; j<n; j++)
            {
                if(i == j) continue;
                string st2 = vc[j];
                min_ans = min(min_ans,diff(st1,st2,len));
            }
        }
        cout<<min_ans<<endl;
    }
    return 0;
}
