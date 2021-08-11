//Solver: Nahin the Coder
//Date : 11 - 08 - 2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	int test;
	cin>>test;
	
	while(test--)
	{
		int a,b,c,d;
		cin>>a>>b;
		cin>>c>>d;
		if(a+c == b and b == d) //B == D
		{
			cout<<"YES"<<endl;
		}
		else if(b==c and a+d == b) //B ==C
		{
			cout<<"YES"<<endl;
		}
		else if(a==d and b+c == a) //A == D
		{
			cout<<"YES"<<endl;
		}
		else if(a==c and b+d == c) //A == C
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
