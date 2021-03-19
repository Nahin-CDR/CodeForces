#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder 
//Date   : 20-03-2021

int main()
{
	int n;
	cin>>n;
	
	
	
    map<pair<int,int>,int>mp;
	
	int count = 0;
	
	for(int i=0; i<n; i++)
	{
		int a,b;
		cin>>a>>b;
	    mp[{a,b}]++;
	    if(mp[{a,b}]>count)
	    {
	    	count = mp[{a,b}];
		}
	}
	
	
	cout<<count<<endl;
	return 0;
}
