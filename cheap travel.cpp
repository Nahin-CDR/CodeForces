#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin The Coder
//Date  : 16-04-2021

int main()
{
	
	
	int n,m,a,b;
	
	cin>>n>>m>>a>>b;
	
	if(m>=n)
	{
		if(b<a)
		{
			cout<<b;
			return 0;
		}
		else if(a<b)
		{
			cout<<min(n*a,b);
			return 0;
		}
	}

	if(m>1 and b<a)
	{
		int rem1 = n/m;
		int rem2 = n%m;
		if(rem2>0)
		{
			cout<<rem1*b+b;
		}
		else
		{
			cout<<rem1*b;
		}
	}
	else if(m>a and a<b)
	{   
	    int rem1 = n/m;
		int rem2 = n%m;
		if(rem2>0)
		{
			cout<<min(rem1*b+b,rem1*b+rem2*a);
		}
		else
		{
			cout<<min(rem1*b,n*a);
		}
	}
	else
	{
		int rem1 = n/m;
		int rem2 = n%m;
		if(rem2>0)
		{
			cout<<min(rem1*b+b,rem1*b+a);
		}
		else
		{
			cout<<min(rem1*b,n*a);
		}
	}
	
	
	return 0;
}
