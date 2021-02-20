#include <bits/stdc++.h>
using namespace std;
 
//Nahin the Coder
 
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		bool no = false;
		long long last = 0;
		long long len;
		cin>>len;
		for(long long i=0; i<len; ++i)
		{
			long long n;
			cin>>n;
			if(last+n<i)
			{
				no = true;
			}
			last = last+n -i;
		}
		if(no)
		{
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
	}
   
   
   
   
   
   return 0;
}
