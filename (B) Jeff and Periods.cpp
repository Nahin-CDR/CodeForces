#include<bits/stdc++.h>
using namespace std;
 
//Solver : Nahin the Coder
//Date   : 10 - 02 - 2021
 
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
	
	
	int n;
	cin>>n;
	
		
	
	map<int,int>rept;
	
	map<int,vector<int> >mapIn;
	vector<int>v;
	
	
	for(int i=1; i<=n; i++)
	{
		int kaspi;
		cin>>kaspi;
		
		mapIn.insert(make_pair(kaspi,vector<int>()));
		mapIn[kaspi].push_back(i);
		rept[kaspi]++;
	}
	
 
	
	
	
 
	map<int,int>result;
	
	for(auto it = mapIn.begin(); it!=mapIn.end(); it++)
	{
		
		int value = it->first;
		map<int,int>::iterator k = rept.find(value);
		
		int len;
		len = k->second;
		
		
		
		
		if(len == 1)
		{
			result.insert(make_pair(value,0));
		}
		if(len != 0)
		{
			int distance = abs( it->second[1] - it->second[0] );
			
			for(int i=1; i<len-1; i++)
		    {
			    if(distance != abs( it->second[i+1] - it->second[i] ) ) 
			    {
			    	distance = -1;
				}
		    }
			
			
			if(distance != -1)
			{
				result.insert(make_pair(value,distance));
			}
		}
	}
 
	cout<<result.size()<<"\n";
	
	for(auto it = result.begin(); it!=result.end(); it++)
	{
		cout<<it->first<<" "<<it->second<<"\n";
	}
	return 0;
}
