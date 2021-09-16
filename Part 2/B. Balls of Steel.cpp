//Solver : Nahin the coder
//date : 16-09-2021

#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>vc;

int Check(int p,int x1,int y1,int n,int k)
{
	int mx = 0;
	for(int i=0; i<n; i++)
	{	
		int x2 = vc[i].first;
		int y2 = vc[i].second;
		int res = abs(x1-x2) + abs(y1-y2);
		mx = max(mx,res);  
	}
	return mx;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int test;
	cin>>test;
	while(test--)
	{
		int n,k;
		cin>>n>>k;
		for(int i=1; i<=n; i++)
		{
			int x,y;
			cin>>x>>y;
	        vc.push_back(make_pair(x,y));
		}
		
		bool gotAns = false;
		for(int i=0; i<n; i++)
		{
			int x = vc[i].first;
			int y = vc[i].second;
			int yes = Check(i,x,y,n,k);
			if(yes <= k)
			{
				gotAns = true;
			}
		}
		if(gotAns == true)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
		vc.clear();
	}
	
	

	
	
	
	
	
	return 0;
}
