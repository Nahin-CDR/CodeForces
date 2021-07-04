//Nahin the Coder
//Date : 04 - 07 - 2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	long long r,g,b;
	cin>>r>>g>>b;
	
	long long ans = r/3 + g/3 + b/3;
	
	long long mn = min(min(r,g),b);
	
	if(mn==0)
	{
		cout<<ans<<endl;
		return 0;
	}
	
	if(r%3 == g%3 and g%3 == b%3)
	{
		cout<<ans+r%3<<endl;
		return 0;
	}
	
	if(r%3+g%3+b%3 == 4 or r%3+g%3+b%3 == 5 )
	{
		cout<<ans+1<<endl;
		return 0;
	}
	
	cout<<ans<<endl;
	
	return 0;
	
}


