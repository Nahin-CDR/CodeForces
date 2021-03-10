#include<bits/stdc++.h>
using namespace std;
 
 
//Solver : Nahin the Coder
//Date   : 10-03-2021
 


int main()
{
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	long long n;
	cin>>n;
	
	long long v[n];
	
	for(long long i=0; i<n; i++)
	{
		cin>>v[i];
	}
	
	sort(v,v+n);
	
    long long count = 0;
	
	for(long long i=0; i<n; i++)
	{
		if(v[i]<=0)
		{
			count = count + (i+1) - v[i];
		}
		else
		{
			count = count + abs(v[i] - (i+1));
		}
	}
	
	cout<<count<<endl;
	
	
	
	
	
	

	
	return 0;
}
