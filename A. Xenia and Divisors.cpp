#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 20-02-2021



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
	int n;
	cin>>n;
	
	int arr[n];
	
	int one = 0;
	int to = 0;
	int three = 0;
	int four = 0;
	int six = 0;
	
	
	bool kaspia = false;
	
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		if(arr[i]==1)
		{
			one++;
		}
		if(arr[i]==2)
		{
			to++;
		}
		if(arr[i]==3)
		{
			three++;
		}
		if(arr[i]==4)
		{
			four++;
		}
		if(arr[i]==6)
		{
			six++;
		}
		
		if(arr[i]==5 or arr[i]==7)
		{
			kaspia = true;
		}
	}
	
	if(n==3)
	{
		sort(arr,arr+n);
		if(arr[0]==arr[1])
		{
			cout<<-1;
			return 0;
		}
		if(arr[0] == 1)
		{
			if(arr[1]%arr[0]==0)
			{
				if(arr[2]%arr[1]==0)
				{
					cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
					return 0;
				}
				else
				{
					cout<<-1;
					return 0;
				}
			}
			else
			{
				cout<<-1;
				return 0;
			}
		}
		else
		{
			cout<<-1;
			return 0;
		}
	}
	
	
	
	if(kaspia==true)
	{
		cout<<-1;
		return 0;
	}
	
	int len = n/3;
	
	if(three>six)
	{
		cout<<-1;
		return 0;
	}

	
	map<int,vector<int> > cp;
	int cnt = 0;
	
	while(len--)
	{
		if(one>0 and three>0 and six>0)
		{
			cp[cnt].push_back(1);
			cp[cnt].push_back(3);
			cp[cnt].push_back(6);
			cnt++;
			one--;
			three--;
			six--;
		}
		if(three==0)
		{
			break;
		}
	}
    
	while(len--)
	{
		
		if(one>0 and to>0 and four>0)
		{
			cp[cnt].push_back(1);
			cp[cnt].push_back(2);
			cp[cnt].push_back(4);
			cnt++;
			one--;
			to--;
			four--;
		}
		
		if(one>0 and to>0 and six>0)
		{
			cp[cnt].push_back(1);
			cp[cnt].push_back(2);
			cp[cnt].push_back(6);
			cnt++;
			one--;
			to--;
			six--;
		}
	}
	

	if(cnt<n/3)
	{
		cout<<-1;
		return 0;
	}
	
	
	int s = 0;
	for(auto it = cp.begin(); it!=cp.end(); it++)
	{
		
		for(int i=0; i<cp[s].size(); i++)
		{
			cout<<it->second[i]<<" ";
		}
		s++;
		cout<<"\n";
	}
	
	
	
	
	
	
	
	return 0;
}
