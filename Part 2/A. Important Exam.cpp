// read in the name of your Lord who created you



//Solver : Nahin the coder
//date : 29-08-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string str[10001];
	int point[10001];
	int student;
	int ans;
	int  total = 0;
	
	cin>>student; cin>>ans;
	for(int i=0; i<student; i++)
	{
		cin>>str[i];
	}
	for(int i=0; i<ans; i++)
	{
		cin>>point[i];
	}
	
	for(int i=0; i<ans; i++)
	{
		map<char,int>mp;
		for(int j=0; j<student; j++)
		{
			//cout<<str[j][i]<<" ";
			++mp[str[j][i]];
		}
	    
	    int mx = -1;
	    
		for(auto it:mp)
		{
		    mx = max(mx,it.second);
		}	
		total = total + mx*point[i];
		//cout<<total<<"\n\n";
	}
	cout<<total<<endl;
	return 0;
}
