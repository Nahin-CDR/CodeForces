//Solver : Nahin the coder
//Date : 01-09-2021
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int len;
	cin>>len;
	map<char,int>mp;
	
	for(int i=0; i<len; i++)
	{
		string str;
		cin>>str;
		char ch = str[0];
		++mp[ch];
	}
	
	int counter = 0;
	
	for(auto it : mp)
	{
		int x = it.second/2;
		int y = it.second-x;
		counter = counter + x*(x-1)/2;
		counter = counter + y*(y-1)/2;
		
	}
	
	cout<<counter<<endl;
	
	
	
	
	
	
	
	
	
	return 0;
}
