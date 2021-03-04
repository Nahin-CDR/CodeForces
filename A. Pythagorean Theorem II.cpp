#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 05-03-2021


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
	int n;
	cin>>n;

	
	int count = 0;
	for(int i=1; i<=n; i++)
	{
		
		for(int j=i; j<=n; j++)
		{
			
			double res = i*i + j*j;
			
			int check = abs(sqrt(res));
			
			if(check<=n and check>=j and check*check==res )		
			{
				count++;
			}
		}
	}
	cout<<count;
	
	
	
	
	
	return 0;
}
