#include<bits/stdc++.h>

using namespace std;

//Solver : Nahin the Coder
//Date   : 01 - 04 - 2021


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
	
	
	int a,b,n;
	cin>>a>>b>>n;
	

	for(int i=0; i<10; i++)
	{
		if((a*10+i)%b==0)
		{
			cout<<a<<i;
			for(int j=0; j<n-1; j++)
			{
				cout<<0;
			}
			return 0;
		}
	}
	
	cout<<"-1";
	
	return 0;
}


