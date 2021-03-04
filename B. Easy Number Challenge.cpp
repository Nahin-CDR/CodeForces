#include <bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 04-03-2021

long long d(int n)
{
	int cnt = 0;
 
	for (int i = 1; i*i<= n; i++) {
		if (n % i == 0)
		{
			cnt = cnt + 2;
		}
		if(i*i==n)
		{
			cnt--;
		}
	}
	return cnt % 1073741824;
}




int main()
{
	int sum = 0;
	
	int a,b,c;
	cin>>a>>b>>c;
	for(int i=1; i<=a; i++)
	{
		for(int j=1; j<=b; j++)
		{
			for(int k=1; k<=c; k++)
			{
				sum = sum + d(i*j*k);
			}
		}
	}
  
    cout<<sum;
  
 
  
   return 0;
  
}
