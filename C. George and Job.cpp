#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll n,m,k,s[5005],d[5005][5005],i,j;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin>>n>>m>>k;
	
	for(int i=1; i<=n; i++)
	{
		cin>>s[i];
		s[i] = s[i] + s[i-1];
	}
	
	//cout<<"\n\n";
	
	//for(int i=1; i<=n; i++)
	//{
	//	cout<<s[i]<<" ";
	//}
	
	//cout<<"\n\n";
	
	for(int i=1; i<=k; i++)
	{
		for(int j = i*m; j<=n; j++)
		{
			d[i][j] = max(d[i][j-1],d[i-1][j-m]+s[j]-s[j-m]);
		}
	}
	cout<<d[k][n];
	
	
	
	
	
	
	
	
	
	
	return 0;
}
