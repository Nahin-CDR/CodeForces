#include<bits/stdc++.h>
using namespace std;
 
//Solver : Nahin the Coder
//Date   : 11 - 02 - 2021
 
string line;
 
int Counter(char ch)
{
	int counter = 0;
	
	stringstream ss(line);
	
	char a;
	while(ss>>a)
	{
		if(ch==a)
		{
			counter++;
		}
	}
	
	return counter;
}
 
 
 
int main()
{
 
    getline(cin,line);
    
    map<char,int>mp;
    
	char ch;
	stringstream ss(line);
	while(ss>>ch)
	{
		int count = Counter(ch);
		mp.insert(make_pair(ch,count));
	}
	
	int singleCounter = 0;
	int even = 0;
	for(auto it = mp.begin(); it!=mp.end(); it++)
	{
		int n = it->second ; 
		if(n%2!=0)
		{
			singleCounter++;
		}
		else
		{
		    even++;	
		}
	}
	
	if(even==mp.size())
	{
		cout<<"First";
		return 0;
	}
	
	
	
	if(singleCounter%2!=0)
	{
		cout<<"First\n";
	}
	else
	{
		cout<<"Second\n";
	}
 
	
	
	
	
	
	return 0;
}
