//Solver : Nahin the Coder
//Date   : 03-09-2021
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	int counter = 0;
	int mx = -1;
	

	for(int i=0; i<n; i++)
	{
		if(arr[i]==1)
		{
			counter = counter+1;
			mx = max(mx,counter);
		}
		else
		{
			counter = 0;
		}
	}
	
	int cnt = 0;
	//round checker
	if(arr[0] == 1 and arr[n-1] == 1)
	{
	
		int r = n-1;
		int l = 0;
		bool rightCounter = true;
		bool leftCounter = true;
		while(true)
		{
			if(arr[r] == 1 and rightCounter == true)
			{
				cnt++;
				r--;
			}
			else
			{
				rightCounter = false;
			}
			if(arr[l] == 1 and leftCounter == true)
			{
				cnt++;
				l++;
			}
			else
			{
				leftCounter = false;
			}
			
			if(leftCounter == false and rightCounter == false)
			{
				break;
			}
		}
	}
	cout<<max(mx,cnt)<<endl;
	
	return 0;
}
