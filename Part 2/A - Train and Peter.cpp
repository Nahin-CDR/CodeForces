//Solver : Nahin the Coder
//Date   : 27 - 07 - 2021
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	bool forward = false;
	bool backward = false;
	bool both = false;

	
	
	string s1,s2,s3;
	cin>>s1>>s2>>s3;
	
	//forward check
	if(s1.find(s2) != -1)
	{
		if(s1.find(s3,s1.find(s2)+s2.length()) != -1)
		{
			forward = true;
		}
	}
	
	//backward check
	reverse(s1.begin(),s1.end());
	
	if(s1.find(s2) != -1)
	{
		if(s1.find(s3,s1.find(s2)+s2.length()) != -1)
		{
			backward = true;
		}
	}
	
	if(forward == true and backward == true)
	{
		cout<<"both";
		return 0;
	}
	if(forward == true)
	{
		cout<<"forward";
		return 0;
	}
	if(backward == true)
	{
		cout<<"backward";
		return 0;
	}
	cout<<"fantasy";
	
	return 0;
}
