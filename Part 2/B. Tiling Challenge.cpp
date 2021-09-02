//Solver : Nahin the coder
//Date : 02-09-2021
#include<bits/stdc++.h>
#define MAX 51
using namespace std;
char arr[MAX][MAX];


int checker(int i,int j)
{
	//checking vertically
	if(arr[i+1][j] == '.')
	{
		arr[i+1][j] = '#';
	}
	else
	{
		return -1;
	}
	
	if(arr[i+2][j] == '.')
	{
		arr[i+2][j] = '#';
	}
	else
	{
		return -1;
	}
	
	
	//checking horizontally
	if(arr[i+1][j-1] == '.')
	{
		arr[i+1][j-1] = '#';
	}
	else
	{
		return -1;
	}
	
	if(arr[i+1][j+1] == '.')
	{
		arr[i+1][j+1] = '#';
	}
	else
	{
		return -1;
	}
	return 1;
}



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int len;cin>>len;
	
	for(int i=0; i<len; i++)
	{
		for(int j=0; j<len; j++)
		{
			cin>>arr[i][j];
		}
	}
	
	for(int i=0; i<len; i++)
	{
		for(int j=0; j<len; j++)
		{
			if(arr[i][j] == '.')
			{
				if(i==len-1)
				{
					cout<<"NO"<<endl;
					return 0;
				}
				int check = checker(i,j);
				if(check == -1)
				{
					cout<<"NO"<<endl;
					return 0;
				}
			}
		}
	}
	cout<<"YES"<<endl;
	return 0;
}




