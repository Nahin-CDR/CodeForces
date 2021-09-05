//Solver : Nahin the Coder
//Date : 05-09-2021
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n,a,b;
		cin>>n>>a>>b;
		string str;cin>>str;
		
		if(a>=0 and b>=0)
		{
			int res = n*(a+b);
			cout<<res<<endl;
		}
		else
		{
			
			int x = unique(str.begin(),str.end()) - str.begin();
			int res = a*n + b*(x/2+1);
			cout<<max(n*(a+b),res)<<endl;
		}
	
	}
	
	
	return 0;
	
	
}
