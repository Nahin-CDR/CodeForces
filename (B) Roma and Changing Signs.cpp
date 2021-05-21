//Solver : Nahin the Coder
//Date   : 21-05-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int len,k;
	cin>>len>>k;
	
	int arr[len];
	
	for(int i=0; i<len; i++)
	{
		cin>>arr[i];
	}
	
	int arr2[len];
	
	
	
	int sum = 0;
	int temp;
	int res;
	
	bool pos = false;
	int f = arr[0];
	int minus = 0;
	if(f>0)
	{
		if(k%2==0)
		{
			minus = 1;
		}
		else
		{
			minus = 2;
		}
		
		pos = true;
	}
	int remainingK;
	
	bool open = true;
	
	int last = 0;
	for(int i=0; i<len; i++)
	{
		if(arr[i]<0 and k>0)
		{
			
			sum = sum + (arr[i]*-1);
			last = abs(arr[i]);
			k--;
		}
		else if(arr[i]==0 and k>0)
		{
			k = 0;
		}
		else if(arr[i]>0 and k>0)
		{
			if(i==0)
			{
				if(k%2==0)
				{
					sum = sum + arr[i];
				}
				else
				{
					sum = sum - arr[i];
				}
			}
			else
			{
				if(k%2==0)
				{
					sum = sum + arr[i];
				}
				else
				{
				    if(k%2==0)
				    {
					    sum = sum + arr[i];
				    }
				    else
				    {
					    if(last>=arr[i])
					    {
					    	sum = sum - arr[i];
						}
						else
						{
							sum = sum + arr[i];
							sum = sum - last*2;
						}
					    last = 0;
					  
				    }
			    }
			}
			k = 0;	
		}
		else
		{
			sum = sum + arr[i];
		}
	}
	
    if(k>0 and len==1)
    {
    	cout<<-sum<<endl;
    	return 0;
	}

	cout<<sum<<endl;
	
	
	
	
	
	
	
	return 0;
}
