//Solver : Nahin the Coder
// Date : 26 - 07 - 2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	string str;
	cin>>n;
	cin>>str;
	
	if(n==1)
	{
		if(str[0] != '?')
		{
			cout<<"No\n";
			return 0;
		}
		cout<<"Yes\n";
		return 0;
	}
	if(n == 2)
	{
		if(str[0] == str[1] and str[0] == '?')
		{
			cout<<"Yes\n";
			return 0;
		}
		if(str[0] != str[1])
		{
			if(str[0] != '?' and str[1] != '?')
			{
				cout<<"No\n";
				return 0;
			}
			cout<<"Yes\n";
			return 0;
		}
		cout<<"No\n";
		return 0;
	}
	if(n == 3)
	{
		if(str[0] != str[2] and str[1] == '?')
		{
			if(str[0] == '?' or str[2] == '?')
			{
				cout<<"Yes\n";
				return 0;
			}
			else
			{
				cout<<"No\n";
			    return 0;
			}
		}
		if(str[0] == str[1] and str[0] == '?')
		{
			cout<<"Yes\n";
			return 0;
		}
		if(str[1] == str[2] and str[2] == '?')
		{
			cout<<"Yes\n";
			return 0;
		}
		if(str[0] =='?' and str[2] == '?')
		{
			cout<<"Yes\n";
			return 0;
		}
		if(str[0] == '?')
		{
			if(str[1] != str[2])
			{
				cout<<"Yes\n";
				return 0;
			}
			if(str[1] == str[2] and str[1] == '?')
			{
				cout<<"Yes\n";
				return 0;
			}
			cout<<"No\n";
			return 0;
		}
		if(str[2] == '?')
		{
			if(str[0] != str[1])
			{
				cout<<"Yes\n";
				return 0;
			}
			cout<<"No\n";
			return 0;
		}
		cout<<"No\n";
		return 0;
	}
	
	int cnt = 0;
	
	bool pass = false;
	
	if(n>3)
	{
		for(int i=0; i<n; i++)
		{
			if(str[i] != '?' and str[i] == str[i+1])
			{
				cout<<"No\n";
				return 0;
			}
			if(i == 0 and str[i] == '?')
			{
				pass = true;
			}
			if(i!=0 and str[i] == '?')
			{
				if(i+1<=n-1)
				{
					if(str[i-1] == str[i+1])
					{
						pass = true;
					}
					if(str[i] == str[i+1])
					{
						pass = true;
					}
				}
			}
		}
	}
	
	if(pass == true)
	{
		cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
	}
	
	
	
	
	
	
	
	return 0;
}
