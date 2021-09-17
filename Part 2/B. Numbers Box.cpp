//Solver : Nahin the Coder
//Date : 17-09-2021

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
		int n,m;
		cin>>n>>m;
		int len = n*m;
		int zero = 0;
		int minus = 0;
		int arr[len];  
		int sum = 0;
		int mini = 999999;
		for(int i=0; i<len; i++)
		{
			cin>>arr[i];
			if(arr[i] == 0)
			{
				zero++;
			}
			if(arr[i] < 0)
			{
				minus++;
			}
			if(mini>abs(arr[i]))
			{
				mini = abs(arr[i]);
			}
			sum = sum + abs(arr[i]);
		}
		if(zero>0 or minus == 0 or minus%2 == 0)
		{
			cout<<sum<<endl;
		}
		else
		{
			cout<<sum-(mini*2)<<endl;
		}
		
	}
	
	
	
	
	return 0;
}
