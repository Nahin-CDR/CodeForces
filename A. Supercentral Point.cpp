#include <bits/stdc++.h>
using namespace std;
 
//Solver : Nahin the Coder
//Date   : 28 - 01 - 2021
 
 
 
 
vector<pair<int,int>>v;
 
bool isSuperCentral(int x,int y,int n)
{
 
 
    int a=0;
	int b=0;
	int c=0;
	int d=0;
	
    int result = 0;
	
	
	
	for(int i=0; i<n; i++)
	{
		
		if(x<v[i].first and y==v[i].second ) 
		{
			a =1;
		}
		
		if(x>v[i].first and y==v[i].second)
		{
			b = 1;
		}
		
		if(x==v[i].first and y>v[i].second)
		{
			c =1;
		}
		
		if(x == v[i].first and y<v[i].second )
		{
		    d =1;
		}
	}
	
	result = a+b+c+d ;
	
	if(result==4)
	{
		return true;
	}
	else
	{
		return false;
	}
}
 
int main()
{
    
    
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {
    	int n1,n2;
    	cin>>n1>>n2;
    	v.push_back(make_pair(n1,n2));
	}
    
    
    
    int res = 0;
    
    for(int i=0; i<n; i++)
    {
    	int a,b;
    	a = v[i].first;
    	b = v[i].second;
    	bool result = isSuperCentral(a,b,n);
    	if(result==true)
    	{
    		res++;
		}
	}
  
	cout<<res<<endl;
	
	
    
    return 0;
 
}
