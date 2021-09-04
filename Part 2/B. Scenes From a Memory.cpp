//Solver : Nahin the Coder
//Date   : 04-09-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	
	int test;
	cin>>test;
	while(test--)
	{
		bool gotAns = false;
		int n;
		cin>>n;
		string str;
		cin>>str;
		bool exist = false;
		int ans;
		for(int i=0; i<n; i++)
		{
			if(str[i] == '1')
			{
				exist = true;
				ans = 1;
				break;
			}
			else if(str[i] == '4')
			{
				exist = true;
				ans = 4;
				break;
			}
			else if(str[i] == '6')
			{
				exist = true;
				ans = 6;
				break;
			}
			else if(str[i] == '8')
			{
				exist = true;
				ans = 8;
				break;
			}
			else if(str[i] == '9')
			{
				exist = true;
				ans = 9;
				break;
			}
		}
		
		if(exist)
		{
			cout<<1<<endl;
			cout<<ans<<endl;
			continue;
		}
		int first,second;
		for(int i=0; i<n; i++)
		{
			if(str[i] == '2')
			{
				for(int j = i+1; j<n; j++)
				{
					if(str[j] == '2')
					{
						gotAns = true;
						first = 2;
						second = 2;
					    break;
					}
					else if(str[j] == '7')
					{
						gotAns = true;
						first = 2;
						second = 7;
						break;
					}
					else if(str[j] == '5')
					{
						gotAns = true;
						first = 2;
						second = 5;
						break;
					}
				} 
			}
			else if(str[i] == '3')
			{
				for(int j = i+1; j<n; j++)
				{
					if(str[j] == '2')
					{
						gotAns = true;
						first = 3;
						second = 2;
						break;
					}
					else if(str[j] == '5')
					{
						gotAns = true;
						first = 3;
						second = 5;
						break;
					}
					else if(str[j] == '3')
					{
						gotAns = true;
						first = 3;
						second = 3;
						break;
					}
				} 
			}
			else if(str[i] == '5')
			{
				for(int j = i+1; j<n; j++)
				{
					if(str[j] == '2')
					{
						gotAns = true;
						first = 5;
						second = 2;
						break;
					}
					else if(str[j] == '5')
					{
						gotAns = true;
						first = 5;
						second = 5;
						break;
					}
					else if(str[j] == '7')
					{
						gotAns = true;
						first = 5;
						second = 7;
						break;
					}
				} 
			}
			else if(str[i] == '7')
			{
				for(int j = i+1; j<n; j++)
				{
					if(str[j] == '2')
					{
						gotAns = true;
						first = 7;
						second = 2;
						break;
					}
					else if(str[j] == '5')
					{
						gotAns = true;
						first = 7;
						second = 5;
						break;
					}
					else if(str[j] == '7')
					{
						gotAns = true;
						first = 7;
						second = 7;
						break;
					}
				} 
			}
			if(gotAns == true)
			{
				break;
			}
		}
		if(gotAns == true)
		{
			cout<<2<<endl;
			cout<<first<<second<<endl;
		}
		if(gotAns == false)
		{
			if(n==2)
			{
				cout<<n<<endl;
			    cout<<str<<endl;
			}
			else
			{
				cout<<2<<endl;
				cout<<str[0]<<str[1]<<endl;
			}
			
		}
	}
	
	
	
	
	
	
	
	return 0;
}
