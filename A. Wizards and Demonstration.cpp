#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin The Coder
//Date  : 25-04-2021

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
	double n,x,y;
	
	cin>>n>>x>>y;
	
	double res = n*(y/100);
	if(ceil(res)<=x)
	{
		cout<<0<<endl;
		return 0;
	}
	cout<<abs(x-ceil(res))<<endl;
	
	
	
	
	return 0;
}
