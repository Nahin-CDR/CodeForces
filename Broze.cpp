#include<bits/stdc++.h>
using namespace std;
// Solver : Nahin the Coder
// Date   : 21-01-2021


int main()
{
	
    string a;
    cin>>a;
	
	
	int len = a.size() + 1;
	char arr[len];
	
	strcpy(arr,a.c_str());
	
	for(int i =0; i<len; i++)
	{
		if(arr[i] == '.')
		{
			cout<<0;
		}
		if(arr[i] == '-' and arr[i+1]=='.')
		{
			cout<<1;
			i++;
		}
		if(arr[i]=='-' and arr[i+1] == '-')
		{
			cout<<2;
			i++;
		}
	}
	return 0;
}
