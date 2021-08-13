//Solver : Nahin the Coder
//Date   : 13 - 08 - 2021
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
		int odd = 0;
		int even = 0;
		int n;
		cin>>n;
		for(int i=0; i<n; i++)
		{
			int p; cin>>p;
			if(p%2!=0) odd++;
			if(p%2==0) even++;
		}
		if(odd==n) cout<<"YES"<<endl;
		else if(even==n) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
