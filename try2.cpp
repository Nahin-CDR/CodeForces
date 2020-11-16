#include<iostream>
#include<map>
using namespace std;

//Solver : Nahin the Coder
//Date   : 16-11-2020



int main()
{
	map<int,int>mp;
	
	int test;
	cin>>test;
	
	while(test--)
	{
		int cn = -1;
		int a,b;
		cin>>a>>b;
		mp.clear();
		int n;
		for(int i=1; i<=a; i++)
		{
			cin>>n;
			mp[n]=1;
		}
		for(int i=0; i<b; i++)
		{
			cin>>n;
			if(mp[n])
			{
				cn = n;
			}
		}
		
		if(cn==-1)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
			cout<<1<<" "<<cn<<endl;
		}
	}
	
	
	
	
	
	
	
	
	return 0;
}
