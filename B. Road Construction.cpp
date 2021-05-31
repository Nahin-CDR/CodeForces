//Solver : Nahin the Coder
//Date   : 31 - 05 - 2021

#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int> > par;

bool checkID(int n)
{
	bool ans = true;
	for(int i=0; i<par.size(); i++)
	{
		if(n == par[i].first or n == par[i].second)
		{
			ans = false;
		}
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,m;
	cin>>n>>m;
	
    if(m!=0)
	{
	    for(int i=0; i<m; i++)
		{
			int s1,s2;
			cin>>s1>>s2;
			par.push_back(make_pair(s1,s2));
		}	
	}	
	
	int myID = 0;
    
    for(int i=1; i<=n; i++)
    {
    	bool id = checkID(i);
    	if(id == true)
    	{
    		myID = i;
    		break;
		}
	}
	
	if(m==0)
	{
		myID = 1;
	}
	
	
	cout<<n-1<<"\n";
	
	for(int i=1; i<=n; i++)
	{
		if(myID != i)
		{
			cout<<myID<<" "<<i<<"\n";
		}
	}
	
	return 0;
}
