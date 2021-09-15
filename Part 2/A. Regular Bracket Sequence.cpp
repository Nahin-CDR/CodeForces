//Solver : Nahin the coder
//date : 15-09-2021
#include<bits/stdc++.h>
using namespace std;

string s;


bool Search_Closing( int start, int len)
{
	for(int i=start; i<len; i++)
	{
		if(s[i] == ')' )
		{
			s[i] = '0';
			return true;
		}
		if(s[i] == '?')
		{
			s[i] = '0';
			return true;
		}
	}
	return false;
}



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	
	
	
	int test;
	cin>>test;
	while(test--)
	{
		cin>>s;
		int len = s.length();
		if(len%2 != 0){
			cout<<"NO"<<endl;
			continue;
		}
		if(s[0] == ')')
		{
			cout<<"NO"<<endl;
			continue;
		}
		
		char open = '(';
		
		int empty = 0;
		bool ans = false;
		for(int i=0; i<len; i++)
		{
			char ch = s[i];
			if(ch == open)
			{
				//search a closing bracket
				bool sr = Search_Closing(i,len);
				if(sr == false)
				{
					cout<<"NO"<<endl;
					ans = true;
					break;
				}
			}
			if(ch == '?')
			{
				//search a closing bracket
				bool sr = Search_Closing(i,len);
				if(sr == false)
				{
					cout<<"NO"<<endl;
					ans = true;
					break;
				}
			}
			if(s[i] == '?')
			{
				empty++;
			}
		}
		if(ans == false)
		{
			if(empty %2 == 0 )
		    {
			    cout<<"YES"<<endl;
		    }
		    else
		    {
			    cout<<"NO"<<endl;
		    }
		}
	}
	
	
	
	
	
	return 0;
}
