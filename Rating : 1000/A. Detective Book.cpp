//Author : Nahin the Coder
//Date : 07-11-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
    int n; cin>>n;
	
	int arr[n];

	for(int i=0; i<n; i++) 
	{
		cin >>arr[i];
	}
    
	int br = 0;
	int mx= -1;
	for(int i=0; i<n ; i++) 
	{
		mx = max(mx, arr[i]);
		if (mx == i+1)
		{
			br++;
		}
	}
    cout<<(br==0?1:br)<<endl;

   
	return 0;
}	
