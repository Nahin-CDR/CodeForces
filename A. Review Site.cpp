#include<bits/stdc++.h>
using namespace std;
 
//Solver : Nahin the Coder
//Date   : 12- 04 - 2021
 
 
int main()
{
	int test;
	cin>>test;
	

	while(test--)
	{
		int server1 = 0;
	    int server2 = 0;
	
		int n;
		cin>>n;
		for(int i=0; i<n; i++)
		{
			int k;
			cin>>k;
			if(k==1)
			{
				server1++;
			}
			if(k==2)
			{
				server2++;
			}
			if(k==3)
			{
				server1++;
			}
		}
		cout<<server1<<endl;
	}
	
	
	   
	
	return 0;
}
 
