//Author : Nahin -CDR
//Date : 08-12-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll n,m;
    cin>>n>>m;
    vector<int>vc;
    ll cnt = 0;
    for(ll i=0; i<n; i++)
    {
	    int real,compressed;
	    cin>>real>>compressed;
	    vc.push_back(real-compressed);
	    cnt = cnt + real;
    }

    if(cnt<=m)
    {
	    cout<<0<<endl;
	    return 0;
    }

    sort(vc.rbegin(),vc.rend());
    ll ans = 0;
    for(ll i=0; i<n; i++)
    {
	    
	    ll min = vc[i];
	    if(cnt<=m)
	    {
		    break;
	    }
	    else
	    {   
		    cnt = cnt-min;
		    ans++;
	    }
    }

    if(cnt<=m)
    {
	    cout<<ans<<endl;
	    return 0;
    }

    cout<<-1<<endl;

    return 0;
}
