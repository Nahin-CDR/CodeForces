//Solver : Nahin the Coder
//Date : 29-08-2021
#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int test;cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int base1 = arr[n-1];
		int base2 = arr[n-2];
		int step = 0;
		for(int i=0; i<n-2; i++)
		{
			step++;
			if(step>=base1 or step>=base2)
			{
				--step;
				break;
			}
		}
		cout<<step<<endl;
	}
	
	return 0;
}
