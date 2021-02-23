#include<bits/stdc++.h>
using namespace std;
 
//Solver : Nahin the Coder
//Date   : 23-02-2021
string s1,s2;
 
int isExist(char ch)
{
	int cnt = 0;
	for(int i=0; i<s1.size(); i++)
	{
		if(s1[i]==ch)
		{
			
			s1[i] = '0';
			cnt = 1;
			break;
		}
		
	}
	
	return cnt;
}
 
 
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
 
	getline(cin,s1);	
	getline(cin,s2);
	
	//stringstream ss1(s1);
	stringstream ss2(s2);
	
	char ch;
	while(ss2>>ch)
	{
		int n = isExist(ch);
		if(n==0)
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	
	
	
	return 0;
}
