//Solver : Nahin the Coder
//Date : 29-08-2021
#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll n;cin>>n;
	ll arr[n];
	
	//Extra tracking
	ll minusCounter = 0;
	ll zeroCounter = 0;
	ll one = 0;

	for(ll i =0; i<n; i++)
	{
		cin>>arr[i];
		if(arr[i]<0)
		{
			minusCounter++;
		}
		
		if(arr[i] == -1)
		{
			one++;
		}
		
		if(arr[i]==0)
		{
			zeroCounter++;
		}
	}
	
	if(one == n and n%2 == 0)
	{
		cout<<0<<endl; return 0;
	}
	if(one%2 == 0 and n-one == zeroCounter)
	{
		cout<<zeroCounter<<endl; return 0;
	}

	ll cost = 0;
	
	if(minusCounter%2 == 0)
	{
		for(ll i=0; i<n; i++)
		{
			if(arr[i]>=0)
			{
				cost = cost + abs(arr[i]-1);
			}
			if(arr[i]<-1)
			{
				cost = cost + abs(arr[i]+1);
			}
			
		}
		cout<<cost<<endl;
	}
	else if(zeroCounter>0 and minusCounter%2!=0)
	{
		for(ll i=0; i<n; i++)
		{
			if(arr[i]>=0)
			{
				cost = cost + abs(arr[i]-1);
			}
			if(arr[i]<=-1)
			{
				cost = cost + abs(arr[i]+1);
			}
			
		}
		cout<<cost<<endl;
	}
	else
	{
		if(one%2 == 0)
		{
		    sort(arr,arr+n);
		   for(ll i=0; i<n; i++)
		   {
		        if((i==0 and one==0)and arr[i]<0)
		        {
		        	cost = cost + abs(arr[i]) + 1;
		        	continue;
				}
				if(arr[i]==0) {
					continue;
				}
				if(arr[i]>=0 and one==0)
				{
					cost = cost + abs(arr[i]-1);
					continue;
				}
				if(arr[i]<-1 and one==0)
				{
					cost = cost + abs(arr[i]+1);
					continue;
				}
		   	    
		   	    
		        if(arr[i]>=0 and one!=0)
			    {
			    	cost = cost + abs(arr[i]-1);
			    }
			    if(arr[i]<-1 and one!=0)
			    {
			    	cost = cost + abs(arr[i])+1;
			    }
		    }
		    cout<<cost<<endl;
		}
		else
		{
		    sort(arr,arr+n);
		    for(ll i=0; i<n; i++)
		    {
		        if(i==0 and arr[i]<0)
		        {
		        	cost = cost + abs(arr[i]) + 1;
		        	continue;
				}
				if(arr[i]>=0)
				{
					cost = cost + abs(arr[i]-1);
					continue;
				}
				if(arr[i]<-1 )
				{
					cost = cost + abs(arr[i]+1);
					continue;
				}
		    }
		    cout<<cost<<endl;
		}
	}
	
	return 0;
}
