#include<bits/stdc++.h>
using namespace std;
 
//Solver : Nahin the Coder
//Date   : 01-03-2021

 
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin)
	#endif
	
	int n;
	cin>>n;
	
	int sum = 0;
	for(int i=0; i<n; i++)
	{
		int temp;
		cin>>temp;
		sum = sum + temp;
	}
	
	if(sum%n==0)
	{
		cout<<n<<endl;
	}
	else
	{
		cout<<n-1<<endl;
	}
	
	
	
	
	
	
	
	
	
	
		
	return 0;
}
