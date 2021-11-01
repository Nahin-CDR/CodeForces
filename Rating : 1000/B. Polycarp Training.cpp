//Author : Nahin the Coder
//Date : 01-11-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
    
  int n; cin>>n; 
	int arr[n];

	for(int i=0; i<n; i++) 
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
  
	int cnt = 1;
  int prev = 0;
  
	for(int i=0; i<n; i++) 
	{
		if(cnt<=arr[i] and prev == 0)
		{
			prev = cnt;
			cnt++;
		}
		else if(arr[i]>prev)
		{
			prev = cnt;  
			cnt++;
		}
	}
    cout<<--cnt<<endl;

    return 0;
}
