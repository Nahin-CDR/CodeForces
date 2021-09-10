//Nahin the Coder
//Date : 10-09-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int test;cin>>test;
	while(test--)
	{
		string s;cin>>s;
		int x = s.rfind("00"); // return "00" string last starting index no
		int y = s.find("11");
		if((x != -1 and y != -1) and x>y)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	
	
	
	
	return 0;
}
