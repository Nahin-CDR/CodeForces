#include<bits/stdc++.h>

//Solver : Nahin the Coder
//Date   : 25-03-2021

using namespace std;




int main()
{
	long long n,k;
	cin>>n>>k;
	
	string str;
	cin>>str;

    
	vector<long long>vc;
	map<char,long long>mp;
	
	for(long long i=0; i<n; i++)
	{
		mp[str[i]]++;
	}
	
	for(auto it = mp.rbegin(); it!=mp.rend(); it++)
	{
		long long cpy = it->second;
		vc.push_back(cpy);
	}
	
	long long remaining = k;
	long long sum = 0;
	
	sort(vc.begin(),vc.end(),greater<int>());
	for(int i=0; i<vc.size(); i++)
	{
		sum = sum + min(vc[i]*vc[i],k*k);
		k = k - min(vc[i],k);
		
	}
	
	cout<<sum<<endl;
	
	return 0;
}
