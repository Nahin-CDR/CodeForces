#include<bits/stdc++.h>
using namespace std;

//Solver :  Nahin the Coder
//Date   : 29 - 01 - 2021



int main()
{
	int page;
	cin>>page;
	
	map<int,int>mp;
	
	for(int i=0; i<7; i++)
	{
		int n;
		cin>>n;
		mp.insert(pair(i+1,n));
	}
	
	int counter = 0;
	int index;
	while(true)
	{
		for(auto it = mp.begin(); it!=mp.end(); it++)
	    {
		    index = it->first;
		    int number = it->second;
		    counter = counter + number;
		    if(counter>=page)
		    {
		    	goto level;
			}
	    }
	}
	
	level:
		cout<<index;
	
	
	return 0;
}
