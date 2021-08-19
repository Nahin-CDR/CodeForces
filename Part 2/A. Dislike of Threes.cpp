//Solver : Nahin the coder
//Date : 19 - 08 - 2021


#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		int counter = 0;
		int cnt = 1;
		int flag;
		while(true)
		{
			if(cnt%3!=0)
			{
				if(cnt%10!=3)
				{
					counter++;
				    flag = cnt;
				}
				else if(cnt<9)
				{
					counter++;
				    flag = cnt;
				}
			}
			else if(cnt%10!=3 and cnt>9)
			{
				if(cnt%3 !=0)
				{
					counter++;
				    flag = cnt;
				}
			}
			if(counter==n)
			{
				break;
			}
			cnt++;
		}
		cout<<flag<<endl;
	}
	
	return 0;
}
