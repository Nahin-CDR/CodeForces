#include<bits/stdc++.h>
using namespace std;
 
 
//Solver : Nahin the Coder
//Date   : 05-03-2021
 
 
 
int main()
{
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	
	
	
	
	
	int n;
	cin>>n;
	
	map<int,int>mp;
	vector<pair<int,int> > vc;
	
	int arr[2*n];
	
	for(int i=0; i<n*2; i++)
	{
	
		cin>>arr[i];
		mp[arr[i]]++;
		vc.push_back(make_pair(arr[i],i));	
	}
	
	for(auto it = mp.begin(); it!=mp.end(); it++)
	{
		int j = it->second;
		if(j%2!=0)
		{
			cout<<-1<<endl;
			return 0;
		}
	}
	
	sort(vc.begin(),vc.end());
	
	for(int i=0; i<n*2; i = i+2)
	{
		cout<<vc[i].second+1<<" "<<vc[i+1].second+1<<"\n";
	}
	
	
	
	
	return 0;
}
