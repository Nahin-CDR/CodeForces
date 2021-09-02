//Solver : Nahin the coder
//Date : 02-09-2021

#include<bits/stdc++.h>
#define MAX 20001
using namespace std;
using ll = long long;
ll arr[MAX];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	ll n;cin>>n;

	ll odd = 0;
	ll even = 0;
	ll sum = 0;
	
	ll oddArray[n];
	ll evenArray[n];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];
		if(arr[i]%2 == 0)
		{
			evenArray[even++] = arr[i];
		}
		else
		{
			oddArray[odd++] = arr[i];
		}
	}
	
	if(odd==0 or even==0)
	{
		sort(arr,arr+n);
		for(int i=n-2; i>=0; i--)
		{
			sum = sum + arr[i];
		}
		cout<<sum<<endl;
		return 0;
	}
	
	
	if(odd == even+1 or even == odd+1)
	{
		cout<<0<<endl;
		return 0;
	}
	
	sort(oddArray,oddArray+odd);
	sort(evenArray,evenArray+even);
	
	
	if(odd>=even)
	{
		
		bool odx = false;
		bool evx = false;
		//starting form odd
		while(true)
		{
			odd--;
			even--;
			if(odd<0 and even>0)
			{
				evx = true;
				break;
			}
			if(even<0 and odd>0)
			{
				odx = true;
				break;
			}
			if(even<0 and odd<0)
			{
				break;
			}
		}
		while(even != 0 and evx == true)
		{
			sum = sum + evenArray[--even];		
		}

		while(odd !=0 and odx==true)
		{
			sum = sum + oddArray[--odd];
		}
	
		cout<<sum<<endl;
	}
	else
	{
		//starting from even
		
		bool odx = false;
		bool evx = false;
		
		
		while(true)
		{
			even--;
			odd--;
			if(odd<0 and even>0)
			{
				evx = true;
				break;
			}
			if(even<0 and odd>0)
			{
				odx = true;
				break;
			}
			if(even<0 and odd<0)
			{
				break;
			}
		}
		while(even != 0 and evx == true)
		{
			sum = sum + evenArray[--even];
		}
		while(odd != 0 and odx == true)
		{
			sum = sum + oddArray[--odd];
		}
		cout<<sum<<endl;
	}
	
	return 0;
}
