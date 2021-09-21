//Solver : Nahin the Coder
//Date   : 21-09-2021
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int arr[3];
		int m;
		cin>>arr[0]>>arr[1]>>arr[2]>>m;
		sort(arr,arr+3);
		int res1 = arr[0] + arr[1] + arr[2] - 3;
		int res2 = arr[2] - arr[1] - arr[0];
		res2--;
		if(m <= res1 and res2<=m)
		{
			cout<<"YES"<<endl;
		} 
		else 
		{
			cout<<"NO"<<endl;
		}
	}
	
	return 0;
}

