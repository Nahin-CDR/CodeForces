//Solver : Nahin the Coder
//Date   : 24-05-2021

#include<bits/stdc++.h>
using namespace std;

vector<long long>res;

long long last = 0;

void step(long long arr[],long long n,long long x,long long y)
{
	if(last<=arr[x])
	{
		res.push_back(max(last,arr[x]));
		last = arr[x] + y;
	}
	else if(last>arr[x])
	{
	    res.push_back(last);
	    last = last + y;
	}

}




int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	long long n;
	
	cin>>n;
	
	long long arr[n];
	
	for(long long i=1; i<=n; i++)
	{
		cin>>arr[i];
	}
	
	long long m;
	cin>>m;
	
	for(long long i=0; i<m; i++)
	{
		int w,h;
		cin>>w>>h;
		step(arr,n,w,h);
	}
	

	
	for(long long i=0; i<res.size(); i++)
	{
		cout<<res[i]<<"\n";
	}
	
   
   
	return 0;
}
