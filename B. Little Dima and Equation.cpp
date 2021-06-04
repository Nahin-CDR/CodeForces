//Nahin the Coder
//04-06-2021

#include<bits/stdc++.h>
using namespace std;

long long limit = 1000000000;
long long a,b,c,sum;

int Mysum(int n)
{
	int m;
	int counter = 0;
	while(n>0)
	{
		m = n%10;
		counter = counter + m;
		n = n/10;
	}
	return counter;
}







int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	vector<long long>res1;
	cin>>a>>b>>c;
	int counter = 0;
	
	for(int i=1; i<=81; i++)
	{
		int rt = a;
		int d = 1;
		while(rt--)
		{
			d = d*i;
		}
		long long x = b*d + c;
		if(Mysum(x) == i and  x<limit)
		{
			res1.push_back(x);
			counter++;
		}
	}

	
	cout<<counter<<"\n";
	for(int i=0; i<res1.size(); i++)
	{
		cout<<res1[i]<<" ";
	}
	
	
	
	
	

	
	return 0;
}
