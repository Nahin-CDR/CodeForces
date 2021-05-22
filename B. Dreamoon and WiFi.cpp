//Nahin The Coder
//Date : 22 - 05 - 2021


#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	string s1,s2;
	
	cin>>s1>>s2;
	
	int ps1 = 0;
	int ps2 = 0;
	int empty = 0;
	
	for(int i=0; i<s1.size(); i++)
	{
		if(s1[i] == '+')
		{
			ps1++;
		}
		if(s2[i] == '+')
		{
			ps2++;
		}
		if(s2[i] == '?')
		{
			empty++;
		}
	}
	
	int  counter = 0;
	
	
	//cout<<"Empty = "<<empty<<" "<<"LEn = "<<(1<<empty)<<"\n";
	
	for(int i=0; i< (1<<empty); i++)
	{
		//cout<<bitset<32>(i)<<"\n";
		//cout<<__builtin_popcount(i) <<" "<<ps2<<" "<<ps1<<"\n";
		
		if(__builtin_popcount(i) + ps2 == ps1)
		{
			counter++;
		}
	}
	
	cout<<fixed<<setprecision(9)<<(double)counter/(1<<empty)<<endl;

	
	
	return 0;
}
