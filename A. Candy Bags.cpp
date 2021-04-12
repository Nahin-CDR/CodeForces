#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 12 - 04 -2021

int main()
{
	long long n;
	cin>>n;
	
	
	long long bags = n*n;
	
	long long candis = bags*(bags+1)/2;
	
	long long lim = candis/n;
	
	vector<long long>vc;
	long long k = n*n;
	
	long long res = n/2;
	
	for(long long i=1; i<=n*res; i++)
	{
		vc.push_back(i);
		vc.push_back(k);
		k--;
	}
	
	
	long long cnt = 0;
	for(long long i=0; i<n; i++)
	{
		for(long long j=0; j<n; j++)
		{
			cout<<vc[cnt++]<<" ";
		}
		cout<<"\n";
	}
	
	
	
	return 0;
}
