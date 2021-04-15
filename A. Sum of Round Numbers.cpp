#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 15 - 04 -2021

int main()
{

	int test;
	cin>>test;
	
	while(test--)
	{
		vector<pair<char,int> >vc;
		string str;
		cin>>str;
		reverse(str.begin(), str.end());
		int len = str.size();
		
		for(int i=0; i<len; i++)
		{
			if(str[i]!= '0')
			{
				vc.push_back(make_pair(str[i],i));
			}
		}
		cout<<vc.size()<<"\n";
	    for(int i=0; i<vc.size(); i++)
	    {
		    cout<<vc[i].first;
		    for(int j=0; j<vc[i].second; j++)
		    {
			    cout<<0;
		    }
		    cout<<" ";
	    }
	    vc.clear();
		cout<<"\n";
	}
	
	
	
	return 0;
}
