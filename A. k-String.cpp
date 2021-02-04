#include<bits/stdc++.h>
using namespace std;
 
//Solver : Nahin the Coder
//Date   : 04-02-2021
 
 
 
int main()
{
	int k;
	string str;
	
	cin>>k;
	cin>>str;
	
	
	string x;
	
	int len = str.size();
	
	sort(str.begin(),str.begin()+len);
	
	for(int i=0; i<len; i=i+k)
	{
		x = x+str[i];
	}
	
	
	
	
	
	string tesla;
	
	for(int i=0; i<k; i++)
	{
		tesla += x;
	}
	
	
	string temp = tesla;
	
	sort(temp.begin(),temp.begin()+temp.size());
	
	if(temp != str)
	{
		cout<<-1<<endl;
	}
	else
	{
		cout<<tesla<<endl;
	}
	
	
	
	
	
	
	return 0;
}
