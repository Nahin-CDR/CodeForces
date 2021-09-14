//Solver : Nahin the Coder
//Date : 14-09-2021

#include<bits/stdc++.h>
using namespace std;
int arr2[200];
int arr1[200];


int Sum1(int end)
{
	int sum = 0;
	for(int i=0; i<end; i++)
	{
		sum = sum+arr1[i];
	}
	return sum;
}



int Sum2(int end)
{
	int sum = 0;
	for(int i=0; i<end; i++)
	{
		sum = sum+arr2[i];
	}
	return sum;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	int test;
	cin>>test;
	while(test--)
	{
		//taking input for first array
		int a1;
		cin>>a1;
	
		for(int i=0; i<a1; i++)
		{
			cin>>arr1[i];
		}
		
		//taking input for second array
		int a2;
		cin>>a2;
	
		for(int i=0; i<a2; i++)
		{
			cin>>arr2[i];
		}
		
		//now we are going to find the max value of array 1
		
		int maxA = 0;
		
		int cnt1 = 1;
		for(int i=0; i<a1; i++)
		{
			int mx = Sum1(cnt1); cnt1++;
			maxA = max(mx,maxA);
		}
	
		
		int cnt2 = 1;
		int maxB = 0;
		for(int i=0; i<a2; i++)
		{
			int mxx = Sum2(cnt2); cnt2++;
			maxB = max(maxB,mxx);
		}
		cout<<maxA+maxB<<endl;
	}
	
	
	
	
	return 0;
}
