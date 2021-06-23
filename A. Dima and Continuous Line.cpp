//Solver : Nahin the coder
//Date   : 23 - 06 - 2021
#include<bits/stdc++.h>
using namespace std;

vector<int>v;

bool check(int n)
{
	int p1;
	int p2;
	if(v[n]>v[n+1])
	{
		p1 = v[n];
		p2 = v[n+1];
	}
	else if(v[n] == v[n+1])
	{
		return false;
	}
	else
	{
		p1 = v[n+1];
		p2 = v[n];
	}
	
	
	for(int i=0; i<n-1; i++)
	{
		int first;
		int second;
		if(v[i]>v[i+1])
		{
			first = v[i+1];
			second = v[i];
		}
		else
		{
		    first = v[i];
			second = v[i+1];	
		}
		
		//p1 = big;
		//p2 = small;
		
		
		if(second<p1 and second>p2)
		{
			if(first<p1 and first<p2)
			{
				return true;
			}
			if(first>p1 and first>p2)
			{
				return true;
			}
		}
		else if(first<p1 and first>p2)
		{
			if(second<p2 and second<p2)
			{
				return true;
			}
			if(second>p2 and second>p2)
			{
				return true;
			}
		}
		
	}
	return false;
}

int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		int k;
		cin>>k;
		v.push_back(k);
	}
	
	for(int i=0; i<n-1; i++)
	{
		if(check(i) == true)
		{
			cout<<"yes";
			return 0;
		}
	}
	cout<<"no";
	return 0;
	
}
