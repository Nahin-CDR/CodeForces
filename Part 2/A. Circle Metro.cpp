//Lets make it happen !
//Solver : Nahin the Coder
//Date : 01-09-2021

#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n,a,x,b,y;
	cin>>n>>a>>x>>b>>y;
	int startA = a;
	int startB = b;
	while(true)
	{
		if(startA == startB)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		if(startA == x or startB == y)
		{
			cout<<"NO"<<endl;
			return 0;
		}
	    startA++;
	    startB--;
		
		
		
	
		if(startA == n+1)
		{
			startA = 1;
		}
		if(startB == 0)
		{
			startB = n;
		}
	
	}
	
	
	
	
	return 0;
}
