//Solver : Nahin the Coder
//Date  : 08 - 07 - 2021


#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	int testcase;
	cin>>testcase;
	
	while(testcase--)
	{
		int one = 0;
		int zero = 0;
		string str;
		cin>>str;
		for(int i=0; i<str.length(); i++)
		{
			if(str[i] == '0')
			{
				zero++;
			}
			else
			{
				one++;
			}
		}
		if(zero == 1 and one>=1)
		{
			cout<<"DA"<<endl;
		}
		else if(one == 1 and zero >= 1)
		{
			cout<<"DA"<<endl;
		}
		else if(one%2 != 0 and zero>=one)
		{
			cout<<"DA"<<endl;
		}
		else if(zero%2 !=0 and one >= zero)
		{
			cout<<"DA"<<endl;
		}
		else if(zero != one)
		{
			cout<<"NET"<<endl;
		}
		else if(zero%2 == 0)
		{
			cout<<"NET"<<endl;
		}
		else
		{
			cout<<"DA"<<endl;
		}
	}
	return 0;
}
