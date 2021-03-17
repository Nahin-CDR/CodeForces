#include<bits/stdc++.h>
using namespace std;


//Solver : Nahin the Coder
//Date   : 17-03-2021


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
	
	int n,m;
	cin>>n>>m;
	int arr[n];
	vector<int>v;
    set<int>mp;
	
	for(int i=0; i<n; i++)
	{
	    cin>>arr[i];
	}
	

	for(int i=n-1; i>=0; i--)
	{
		mp.insert(arr[i]);
	    arr[i] = mp.size();
	}

	

	
	for(int i=0; i<m; i++)
	{
		int limit;
		cin>>limit;
		cout<<arr[limit-1]<<endl;
	}
    

	
	
	
	
	return 0;
}
 
