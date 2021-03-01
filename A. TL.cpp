#include<bits/stdc++.h>
using namespace std;
 
//Solver : Nahin the Coder
//Date   : 01-03-2021

 
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin)
	#endif
	
	int n,m;
	cin>>n>>m;
	
	int arr1[n];
	int arr2[m];
	
	for(int i=0; i<n; i++)
	{
		cin>>arr1[i];
	}
	
	for(int i=0; i<m; i++)
	{
		cin>>arr2[i];
	}
	
	sort(arr1,arr1+n);
	
	sort(arr2,arr2+m);
	
	int aMin = arr1[0];
	int aMax = arr1[n-1];
	
	int bMin = arr2[0];
	
	if(max(aMin*2,aMax)<bMin)
	{
		cout<<max(aMin*2,aMax)<<endl;
	}
	else
	{
		cout<<-1<<endl;
	}
	
	
	
	
	
	
	
	
	
		
	return 0;
}
