#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 25-02-2021



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin)
	#endif
	
	int n;
	cin>>n;
	
	
	int arr1[n];
	int arr2[n];
	int arr11[n];
	int arr22[n];
	
	for(int i=0; i<n; i++)
	{
		int a,b;
		cin>>a>>b;
		arr1[i] = a;
		arr2[i] = b;
		arr11[i] = a;
		arr22[i] = b;
	}
	
	
	
	sort(arr11,arr11+n);
	sort(arr22,arr22+n);
	
	int lo = arr11[0];
	int hi = arr22[n-1];
	
	int cnt = - 1;
	for(int i=0; i<n; i++)
	{
		if(lo==arr1[i] and hi==arr2[i])
		{
		    cout<<i+1<<endl;
			return 0;	
		}
	}
	
	cout<<-1<<endl;
	
	
	
	
	
   
    
    
    
		
	return 0;
}
