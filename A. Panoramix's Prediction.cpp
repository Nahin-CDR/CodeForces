#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 22 - 01 - 2021



int isPrime(int n)
{
    int res = 0;
	for(int i = n+1; i<50; i++)
	{
		bool r = true;
		for(int j=2; j<=10; j++)
		{
			if(i%j==0 and i!=j)
			{
				r = false;
			}
		}
		if(r==true)
		{
			res = i;
			break;
		}
	}
	

	return res;
}



int main()
{
	int n,m;
	cin>>n>>m;
	
	int res = isPrime(n);
	
	if(res==m)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	
	return 0;
}
