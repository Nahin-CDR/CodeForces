#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int len = str.size();
	
	vector<pair<char,int>>vc;
	
	for(int i=0; i<len; i++)
	{
		if(i>0 and vc.back().first==str[i])
		{
			vc.back().second++;
		}
		else
		{
			vc.push_back(make_pair(str[i],1));
		}
	}
	int len2 = vc.size();
	if(len2%2==0)
	{
		cout<<0<<endl;
		return 0;
	}
	
	
	bool flag = true;
	for(int i=0; i<len2/2; i++)
	{
		flag = flag and (vc[i].first == vc[len2-i-1].first);
		flag = flag and (vc[i].second + vc[len2-i-1].second >= 3);
	}
	
	if(flag==true and vc[len2/2].second>=2)
	{
		cout<<vc[len2/2].second+1<<endl;
	}
	else
	{
		cout<<0<<endl;
	}
	
	return 0;
}
