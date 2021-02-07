#include<bits/stdc++.h>
using namespace std;
 
// Solver : Nahin the Coder
// Date   : 07-02-2021
 
int maxDifference;
 
 
long long maxCount(long long arr[],long long len,long long maxValue)
{
	int counter = 0;
	for(int i=0; i<len; i++)
	{
		if(maxValue==arr[i]) 
		{
			counter++;
		}
	}
	
	return counter;
}
 
 
 
 
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);    
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
    long long n;
    cin>>n;
    
    long long arr[n];
    
    for(long long i=0; i<n; i++)
    {
    	cin>>arr[i];
	  }
	
	long long max;
	long long min;
	
	sort(arr,arr+n);
	max = arr[n-1];
	min = arr[0];
	
 
	maxDifference = max-min;
	cout<<maxDifference<<" ";
	if(max==min)
	{
		cout<<n*(n-1)/2;
		return 0;
	}
	
	long long mx = maxCount(arr,n,max);
  long long mn = maxCount(arr,n,min);
  cout<<mx*mn<<endl;
	
	return 0;
}
