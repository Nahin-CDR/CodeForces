//Solver : Nahin the Coder
//Date : 09-12-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll test; cin>>test; 
    while(test--)
    {
        double n,x;
        bool everyone_rich = true;
        cin>>n>>x;
        vector<double>vc;
        for(double i=0; i<n; i++)
        {
            double k; cin>>k;
            vc.push_back(k);
            if(k<x)
            {
                everyone_rich = false;
            }
        }
        if(everyone_rich)
        {
            cout<<n<<endl;
            continue;
        }
        sort(vc.rbegin(),vc.rend());

        double maxWealth = 0;
        double cnt = 0;
        for(double i=0; i<n; i++)
        {
            maxWealth = maxWealth + vc[i];
            ++cnt;
            if(maxWealth/cnt < x)
            {
                --cnt;
                break;
            }
        }
        cout<<cnt<<endl;
    }


    return 0;
}
