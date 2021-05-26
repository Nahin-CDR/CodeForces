//Solver : Nahin the Coder
//Date   : 26 - 05 - 2021

#include<bits/stdc++.h>
using namespace std;

vector<int>res;
int vc[1000000];



int last = 0;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int len,op;
	cin>>len>>op;
	
	for(int i=1; i<=len; i++)
	{
	    cin>>vc[i];
	}
	

	while(op--)
	{
		int typ;
		cin>>typ;
		if(typ==1)
		{
			int index,no;
			cin>>index>>no;
			vc[index] = no-last;
		}
		if(typ==2)
		{
			int add;
		    cin>>add;
		    last += add;
		}
		if(typ==3)
		{
			int print;
			cin>>print;
			
			int p = vc[print]+last;
		
			res.push_back(p);
		}
	}
	
	
	
	for(int i=0; i<res.size(); i++)
	{
		cout<<res[i]<<"\n";
	}
	
	
	
	return 0;
}
