//Solver : Nahin the coder
//Date : 13-09-2021



//Problem Name : Sring LCM
//time limit 2 second


#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
	ll test;
	string oneT,oneS;
	cin>>test;
	while(test--)
	{
		string s,t;
		cin>>s>>t;
		oneT = t;
		oneS = s;
		int lenS = s.length();
		int lenT = t.length();
		// first we need to check if the string is exist
		if(lenS == lenT)
		{
			bool yes = true;
			for(int i=0; i<lenS; i++)
			{
				if(s[i] != t[i])
				{
					yes = false;
					break;
				}
			}
			if(yes)
			{
				cout<<s<<endl;
			}
			else
			{
				cout<<-1<<endl;
			}
		}
		else 
		{
			string p = s;
			string q = t;
			while(true)
			{
				if(p.length() == q.length())
				{
					if(p==q)
					{
						cout<<q<<endl;
					}
					else
					{
						cout<<-1<<endl;
					}
					break;
				}
				if(p.length() < q.length())
				{
					p = p+s;
				}
				else
				{
					q = q+t;
				}
			}
		}
	}
	
	
	
	
	
	
	return 0;
}
