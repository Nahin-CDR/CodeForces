#include<bits/stdc++.h>
using namespace std;
 
//Solver : Nahin the Coder
//Date   : 03-03-2021
 
 
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	
	int b,g;
	cin>>b>>g;
	
	if(b==g)
	{
		for(int i=0; i<b+g; i++)
		{
			if(i%2==0)
			{
				cout<<"B";
			}
			else
			{
				cout<<"G";
			}
		}
	}
	if(b>g)
	{
		int r = b-g;
		for(int i=0; i<g+b-r; i++)
		{
			if(i%2==0)
			{
				cout<<"B";
			}
			else
			{
				cout<<"G";
			}
		}
		for(int i=0; i<r; i++)
		{
			cout<<"B";
		}
	}
    if(g>b)
	{
		int r = g-b;
		for(int i=0; i<b+g-r; i++)
		{
			if(i%2==0)
			{
				cout<<"G";
			}
			else
			{
				cout<<"B";
			}
		}
		for(int i=0; i<r; i++)
		{
			cout<<"G";
		}
	}
  
		
	return 0;
}
