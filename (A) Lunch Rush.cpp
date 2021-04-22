#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 22 - 04 -2021

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
    long long n,k;
    cin>>n>>k;
    long long mx = -1000000000;
    for(long long i=0; i<n; i++)
    {
    	long long f,t;
    	cin>>f>>t;
    	if(t>k)
    	{
    		mx = max(mx,f-(t-k));
		}
		else
		{
			mx = max(f,mx);
		}
    	
	}
    cout<<mx;
	
    
    
	return 0;
}            
