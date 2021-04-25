#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin The Coder
//Date  : 26-04-2021

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif

    string a,b;
	cin>>a>>b;
	
	stringstream pp1(a);
	stringstream pp2(b);
	
	int p1 = 0;
	int p2 = 0;
	
	pp1>>p1;
	pp2>>p2;
	
	int res1 = p1+p2;
	
	string str = to_string(res1);
	
	string num1;
	string num2;
	
	string res;
	
	for(int i=0; i<str.size(); i++)
	{
	    if(str[i] !='0' and i==0)
		{
		    res = str[i];	
		}
		if(str[i] != '0' and i!=0)
		{
		    res = res+str[i];
		}	
	} 
	
	
	
	
	for(int i=0; i<a.size(); i++)
	{
	    if(a[i] !='0' and i==0)
		{
		    num1 = a[i];	
		}
		if(a[i] != '0' and i!=0)
		{
		    num1 = num1+a[i];
		}	
	} 
	
	for(int i=0; i<b.size(); i++)
	{
		if(b[i] !='0' and i==0)
		{
		    num2 = b[i];	
		}
		if(b[i] != '0' and i!=0)
		{
		    num2 = num2+b[i]; 
		}	
	}
	

	
	stringstream ss1(num1);
	stringstream ss2(num2);
	
	int x = 0;
	int y = 0;
	
	ss1>>x;
	ss2>>y;
	
	int res2 = x+y;
	
	string result = to_string(res2);
	
	
	
	if(result == res)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	
	
	
	
	return 0;
}
