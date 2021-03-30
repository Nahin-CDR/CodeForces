#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 31 - 03 - 2021

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
	
	
	
	int n;
	cin>>n;
	vector<pair<int,int> > vc;
	
	for(int i=0; i<n; i++)
	{
		int n,m;
		cin>>n>>m;
		vc.push_back(make_pair(n,m));
	}
	
	
	int sum = 0;
	
	for(int i=0; i<n; i++)
	{
		int cmp = vc[i].first;
		bool notexist = true;
		for(int j=0; j<n; j++)
		{
			if(cmp == vc[j].second and i != j)
			{
				notexist = false;
			}
		}
		if(notexist)
		{
			sum++;
		}
	}
	
	cout<<sum<<endl;
	
	
	return 0;
}
