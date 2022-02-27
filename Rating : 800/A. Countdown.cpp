
//Problem : A. Countdown
//Solver : Nahin_Junior71
//Date : 27-02-2022

#include <bits/stdc++.h>
using namespace std;




int main()
{
	int test; cin>>test;
	while(test--)
	{    
		int sum = 0;
		int n; cin>>n;
		for(int i=1; i<=n; i++)
		{
			char ch; cin>>ch;
			if(i == n)
			{
				sum = sum + (ch-'0');
			}
			else if((ch-'0') != 0)
			{
				sum = sum + (ch-'0') + 1;
			}
		} 
          cout<<sum << endl;     

	}
	

	return 0;
}
