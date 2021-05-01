#include<bits/stdc++.h>
using namespace std;
//-----------storage for main elements --------//
vector<int>vc;
	
	//Solver : Nahin the Coder
	//Date   : 02-04-2021

bool isFibo(int n,int f,int s)
{
	if(f+s==vc[n])
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
	
	
	//------------storage for count --------//
	vector<int>res;
	
	for(int i=0; i<n; i++)
	{
		int op;
		cin>>op;
		vc.push_back(op);
	}
	
	if(n==1)
	{
		cout<<1<<endl;
		return 0;
	}
	if(n==2)
	{
		cout<<2<<endl;
		return 0;
	}
	if(n==3)
	{
	    if(vc[0]+vc[1]==vc[2])
		{
		    cout<<3<<endl;
			return 0;	
		}
		else
		{
			cout<<2<<endl;
			return 0;
		}
	}
	
	int f = vc[0];
	int s = vc[1];
	
	int cnt = 2;
	
	
	bool sorted = true;
	
	for(int i=2; i<n; i++)
	{
		bool fibo = isFibo(i,f,s);
		if(fibo==true)
		{
			f = vc[i-1];
			s = vc[i];
			cnt++;
		}
		else
		{
			sorted = false;
			res.push_back(cnt);
			cnt = 2;
			f = vc[i-1];
			s = vc[i];
		}
	}
	res.push_back(cnt);
	
	if(sorted==true)
	{
		cout<<cnt<<endl;
		return 0;
	}
	
	sort(res.begin(),res.end());
	
   
	
	cout<<res[res.size()-1]<<endl;
		
	
	return 0;
}
