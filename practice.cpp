//Nahin the Coder
//Date : 10 - 06 - 2021

#include<bits/stdc++.h>
#define s(v) v.size()
using namespace std;

long long nb,ns,nc;
long long pb,ps,pc;
string str;
long long r;


int main()
{
	cin>>str;	
	cin>>nb>>ns>>nc>>pb>>ps>>pc;
	
	cin>>r;
	
	long long b = 0;
	long long s = 0;
	long long c = 0;
	long long counter = 0;
	
	for(int i=0; i<s(str); i++)
	{
		if(str[i] == 'B') b++;
		if(str[i] == 'S') s++;
		if(str[i] == 'C') c++;
	}
	
	if(b == 0) nb = 0;
	if(s == 0) ns = 0;
	if(c == 0) nc = 0;
	
	while(nb != 0 || nc != 0 || ns != 0)
	{
		if(b>0)
		{
			if(nb>=b)
			{
				nb = nb - b;
			}
			else
			{
				r = r - (b-nb)*pb;
				nb = 0;
			}
			if(r<0)
			{
				cout<<counter<<endl;
				return 0;
			}
		}
		
		if(s>0)
		{
			if(ns>=s)
			{
				ns = ns - s;
			}
			else
			{
				r = r - (s-ns)*ps;
				ns = 0;
			}
			if(r<0)
			{
				cout<<counter<<endl;
				return 0;
			}
		}
		if(c>0)
		{
			if(nc>=c)
			{
				nc = nc - c;
			}
			else
			{
				r = r - (c-nc)*pc;
				nc = 0;
			}
			if(r<0)
			{
				cout<<counter<<endl;
				return 0;
			}
		}
		counter++;
	}
	
	counter = counter + r/(b*pb+c*pc+ps*s);
	
	cout<<counter<<endl;
	
	
	return 0;
}
