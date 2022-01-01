//Author : Nahin the Coder
//Date : 01-01-2022

#include<bits/stdc++.h>
using namespace std;

//Happy New YEAR 2022 !!!
//I am going to leave every comfort zone I have in this year
//And will push myself forward insha-Allah

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int test;
	cin>>test;

	while(test--)
	{
		vector<int>left;
		vector<int>right;
		int n; 
		cin>>n;
		for(int i=0; i<n; i++)
		{
			int l,r;
			cin>>l>>r;
			left.push_back(l);
			right.push_back(r);
		}
		sort(left.begin(), left.end());
		sort(right.begin(), right.end());

        int lm = left[right.size()-1];
		int rm = right[0];
        cout<<max(0,lm-rm)<<endl;
        left.clear();
		right.clear();
	}
	return 0;
}
