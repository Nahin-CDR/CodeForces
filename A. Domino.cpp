#include<bits/stdc++.h>
using namespace std;
 
 
//Solver : Nahin the Coder
//Date   : 06-03-2021
 
 
 
int main()
{
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin>>n;
	
	int odd = 0;
	
	int v;
	int l =0;
	int r =0;
	
	int larr[n];
	int rarr[n];
	
	int n1 = 0;
	int m = 0;
	int left =0;
	int right =0;
	for(int i=0; i<n*2; i++)
	{
		cin>>v;
		if(v%2 != 0)
		{
			odd++;
		}
		if(i%2==0)
		{
			if(v%2!=0)
			{
				left++;
			}
			
			larr[n1++] = v;
			l = l + v;
		}
		if(i%2 !=0)
		{
			if(v%2 !=0)
			{
				right++;
			}
			rarr[m++] = v;
			r = r+v;
		}
	}
	bool p = false;
	bool tk = true;
	for(int i=0; i<n; i++)
	{
		if(larr[i]!=rarr[i])
		{
			tk = false;
		}
		if(larr[i]==rarr[i])
		{
			if(larr[i]%2 !=0 and rarr[i]%2 !=0)
			{
				p = true;
				left--;
				right--;
			}
		}
	}
	
	if(p==true)
	{
		if(left==0 and right==0)
		{
			if(l%2 !=0 and r%2 != 0)
			{
				cout<<-1;
		        return 0;
			}
		}
		
	}
	
	if(tk==true)
	{
		if(l%2!=0 and r%2!=0)
		{
			cout<<-1;
			return 0;
		}
		
	}
	
	
	if(l%2== 0 and r%2==0)
	{
		cout<<0;
		return 0;
	}

		
	
	if(odd==0)
	{
		cout<<0<<endl;
		return 0;
	}
	
	
	if(n==1 and odd != 0)
	{
		if(odd==0)
		{
			cout<<0<<endl;
		}
		else
		{
			cout<<-1<<endl;
		}
		return 0;
	}
	
	
	if(odd%2 !=0)
	{
		cout<<-1;
		return 0;
	}
	
	
	bool ans = true;
	
	int cnt = 0;
	
	int anss = odd;
	
	while(odd--)
	{
		
		if(odd%2 == 0)
		{
			ans = false;
			break;
		}
		else
		{
			cnt++;
		}
		
	}
	
	if(ans==true)
	{
		cout<<-1;
		return 0;
	}
	if(anss%(n*2) == 0)
	{
		cout<<0;
		return 0;
	}
	
	
	cout<<cnt;
	
	
	

	
	
	
	
	
	
	
	return 0;
}
