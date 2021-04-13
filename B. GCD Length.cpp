#include<bits/stdc++.h>

using namespace std;



int main()
{
	long long test;
	cin>>test;
	
	while(test--)
	{
		long long a,b,c;
		cin>>a>>b>>c;
	
		
		long long a1,b1,ans;
		
		ans = pow(10,c-1);
		a1 = pow(10,a-1);
		b1 = pow(10,b-1)+ans;
		cout<<a1<<" "<<b1<<endl;	
	}
	
	
	return 0;
}
