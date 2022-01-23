//Author : Nahin the Coder
//Date : 23-01-2022

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
		string str;
		cin>>str;
		int len = str.length();
		
			
		int firstIndex = 1;
		for(int i=len-1; i>=1; i--)
		{
			int m = str[i] - '0';
			int n = str[i-1] - '0';
			if(m+n>=10)
			{
				firstIndex = i;
				break;
			}
		}
            
		for(int i=0; i<firstIndex-1; i++)
		{
			cout<<str[i];
		}
			
		cout<<(str[firstIndex-1]-'0'+str[firstIndex]-'0');

		for(int i=firstIndex+1; i<len; i++)
		{
			cout<<str[i];
		}
			
		cout<<"\n";
		

	}
	

	

	return 0;
}

