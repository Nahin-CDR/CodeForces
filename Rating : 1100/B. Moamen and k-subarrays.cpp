//Author : Nahin the Coder
//Date  : 01-12-2021

#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int test; cin>>test;
	while(test--)
	{
		int n,k;
		cin>>n>>k;
		
		int prev;
		bool sorted = true;
		int subArrayNeeded = 1;
       
        vector<pair<int,int>>vc(n);

		for(int i=0; i<n; i++)
		{
			cin>>vc[i].first;
			vc[i].second =i;
		}
		sort(vc.begin(),vc.end());
		for(int i=1; i<n; i++)
		{
            //cout<<vc[i-1].first<<" "<<vc[i].first<<endl;
			if(vc[i-1].second+1 != vc[i].second)
			{
				subArrayNeeded++;
			}
		}
		cout<<((k>=subArrayNeeded)?"YES":"NO")<<endl;
	}
	return 0;
}
