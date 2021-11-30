//Author : Nahin the Coder
//Date  : 30-11-2021

#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,q;
	cin>>n>>q;
	string str; 
	cin>>str;
	string check = "abc";
	int cnt = 0;
	size_t found = str.find(check,0);
	while(found != string::npos)
	{
		cnt++;
		found = str.find(check,found+1);
	}
	while(q--)
	{
		int pos;
		char ch;
		cin>>pos>>ch;
		if(str[pos-1] == ch)
		{
			cout<<cnt<<endl;
		}
		else
		{
			for(int i=pos-1; (i>=0 and i>=pos-3); i--)
			{
				if(str[i] =='a' and str[i+1] == 'b' and str[i+2] == 'c')
				{
					cnt--;
				}
			}
			str[pos-1] = ch;
			for(int i=pos-1; (i>=0 and i>=pos-3); i--)
			{
				if(str[i] =='a' and str[i+1] == 'b' and str[i+2] == 'c')
				{
					cnt++;
				}
			}
			cout<<cnt<<endl;
		}
		
		
	}
	return 0;
}
