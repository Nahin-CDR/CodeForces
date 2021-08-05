//Solver : Nahin the Coder
//Date   : 05-08-2021

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int test;
	cin>>test;
	
	while(test--)
	{
		string str;
		int len,query;
		cin>>len>>query;
		cin>>str;
		while(query--)
		{
			int left,right;
			cin>>left>>right;
			int l = left - 1;
			int r = right - 1;
			int left_counter = 0;
			int right_counter = 0;
			int i = 0;
			int j = len - 1;
			while(true)
			{
			    if(i <= l-1)
				{
					if(str[--l] == str[left-1])
					{
						left_counter++;
					}
				}	
				if(j >= r+1)
				{
					if(str[++r] == str[right-1])
					{
						right_counter++;
					}
				}
				if(l == i and r == j)
				{
					break;
				}
			}
			if(left_counter > 0 or right_counter > 0)
			{
				cout<<"Yes"<<endl;
			}
			else
			{
				cout<<"No"<<endl;
			}
		}
	}
 
    return 0;
}
