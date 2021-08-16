//Solver : Nahin the Coder
//Date   : 16 - 08 - 2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		int x;
		cin>>x;
		n--;
		while(n--)
		{
			int k;
			cin>>k;
			x = x & k;
		}
		cout<<x<<endl;
	}
	return 0;
}
