//Solver : Nahin the Coder
//Date : 28-07-2021

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int test;
	cin>>test;
	
	while(test--)
	{
		string str;
		cin>>str;
		int n = str.length();
		if(str[0] == str[n-1])
		{
			cout<<"NO\n";
			continue;
		}
		int closing = 0;
		int opening = 0;
	    for(int i=0; i<n; i++)
	    {
	    	if(str[0] == str[i]) opening++;
	    	else opening--;
	    	//break
			if(opening<0) break;
			
		}
		for(int i=0; i<n; i++)
	    {
			if(str[i] == str[n-1]) closing--;
			else closing++; 
			if(closing < 0) break;
		}
		if(opening == 0 or closing == 0)
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
	
	
	
	
    return 0;
}
