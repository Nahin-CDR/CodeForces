#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 23-02-2021

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin)
	#endif
	
	int n;
	cin>>n;
	
	int to = 0;
	int one = 0;
	
	for(int i=0; i<n; i++)
	{
		int p;
		cin>>p;
		if(p==100)
		{
			one++;
		}
		else
		{
			to++;
		}
	}
	
	
	
	if(one>0 and to==0)
	{
		if(one%2==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		return 0;
	}
	
	if(one==0 and to>0)
	{
		if(to%2==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		return 0;
	}
	

	if(one>0 and to>0)
	{
		if(one%2!=0 and to%2!=0)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		if(one%2==0 and to%2==0)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		if(to==one)
		{
			cout<<"YES"<<endl;
			return 0;
		}
	
		if(one>to)
		{
			if(one%2==0 and to%2!=0)
			{
				cout<<"YES"<<endl;
				return 0;
			}
			if(one==to*2)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
			return 0;
		}
		if(to>one)
		{
			if(one%2!=0 and to%2==0)
			{
				cout<<"NO"<<endl;
				return 0;
			}
			if(one%2==0 and to%2!=0)
			{
				cout<<"YES"<<endl;
				return 0;
			}
			if((to*2)%one==0)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}	
		}
		return 0;
	}
	
	
	return 0;
}
