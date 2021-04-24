#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin The Coder
//Date  : 24-04-2021

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
	
	int n,k;
	cin>>n>>k;
	
	int sum = 0;
	int last= 0;
	
	while(true)
	{
		for(int i=1; i<=n; i++)
		{
			if(k==0)
			{
				last = k;
				goto level1;
			}
			if(k<i)
			{
				last =abs(k);
				goto level2;
			}
			k = k-i;
		}
	}
	level1:
		cout<<last<<endl;
		return 0;
	level2:
		cout<<last<<endl;
	return 0;
}
