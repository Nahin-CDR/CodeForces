// Solver : Nahin the Coder
// Date : 10 - 08 - 2021

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
    ll test;
    cin>>test;
    while(test--)
    {
    	bool flag = false;
    	int n,m;
    	cin>>n>>m;
    	int a,b,c,d;
    	for(int i=1; i<=n; i++)
    	{
    		cin>>a>>b>>c>>d;
    		if(b == c)
    		{
    			flag = true;
			}
		}
		if(m%2 !=0 or flag == false)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
    }
    return 0;
}
