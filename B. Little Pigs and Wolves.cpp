#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the coder
//Date   : 04 - 05 - 2021
	
	
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	
	int n,m;
	cin>>n>>m;
	
	char arr[n][m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>arr[i][j];
		}
	}
	
	int count = 0;
	
	
	
	//checking for row
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m-1; j++)
		{
			if(arr[i][j] == 'P' and arr[i][j+1] == 'W')
			{
				arr[i][j] ='0';
				arr[i][j+1] = '0';
				count++;
			}
			else if(arr[i][j] == 'W' and arr[i][j+1] == 'P')
			{
				arr[i][j] ='0';
				arr[i][j+1] = '0';
				count++;
			}
		}
	}
	
	
	
	
	//checking for coloumn
	
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n-1; j++)
		{
			if(arr[j][i] == 'P' and arr[j+1][i] == 'W')
			{
				arr[j][i] ='0';
				arr[j+1][i] = '0';
				count++;
			}
			else if(arr[j][i] == 'W' and arr[j+1][i] == 'P')
			{
				arr[j][i] ='0';
				arr[j+1][i] = '0';
				count++;
			}
		}
	}
	
	
	
	
	cout<<count<<endl;

	
	
	
	
	
	
	return 0;
}
