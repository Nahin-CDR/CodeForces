//Solver : Nahin the Coder
//Date : 20 - 08 - 2021
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
		int a,b,c;
		cin>>a>>b>>c;
		int res = max(abs(a-b)+abs(a-c)+abs(b-c)-4,0);
		cout<<res<<endl;
	}
	return 0;
}
