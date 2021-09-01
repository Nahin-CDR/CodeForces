#include<bits/stdc++.h>
using namespace std;

int main()
{
	//Lets make it happen
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int test;
	cin>>test;
	while(test--)
	{
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int min = arr[0];
		int max = arr[n-1];
		if(min+k>=max-k)
		{
			cout<<min+k<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
	}
	return 0;
}
