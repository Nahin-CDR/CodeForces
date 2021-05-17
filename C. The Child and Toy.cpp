#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 18-05-2021



int arr[10000];


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
	
	int n,m;
	cin>>n>>m;
	
	for(int i=1; i<=n; i++)
	{
		cin>>arr[i];
	}
	
	int ans = 0;
	
	for(int j=1; j<=m; j++)
	{
		int x,y;
		cin>>x>>y;
	    ans = ans + min(arr[x],arr[y]);
	}
	
	
	cout<<ans<<endl;
	
	
	
	
	return 0;
}
