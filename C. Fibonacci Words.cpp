#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 2 - 04 - 2021


int main()
{
	string str;
	cin>>str;
	
	vector<int>vc;
	
	if(str.size()<=2)
	{
		cout<<"YES"<<endl;
		return 0;
	}
	
	for(int i=0; i<str.size(); i++)
	{
		vc.push_back(str[i]-65);
	}
	
	bool ans = true;
	
	for(int i=2; i<vc.size(); i++)
	{
		if((vc[i-2]+vc[i-1])%26 != vc[i])
		{
			ans = false;
		}
	}
	
	if(ans==true)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	
   
    
    
	return 0;
}
