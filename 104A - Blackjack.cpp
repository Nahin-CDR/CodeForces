#include<bits/stdc++.h>
using namespace std;
 
//Solver : Nahin the Coder
//Date   : 10 - 04 - 2021
 
 
int main()
{
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
    
	vector<int>vc;
	
	for(int i=0; i<16; i++)
	{
		vc.push_back(10);
	}
	
	for(int i=0; i<4; i++)
	{
		vc.push_back(1);
		vc.push_back(11);
	}
	
	for(int i=0; i<4; i++)
	{
		for(int j=2; j<=9; j++)
		{
			vc.push_back(j);
		}
	}
	
	
	
	int n;
	cin>>n;
	
	int rem = n - 10;
	
	if(rem==0)
	{
		cout<<0<<endl;
		return 0;
	}
	
	int counter = 0;
	
	int len = vc.size();
	
	for(int i=0; i<len; i++)
	{
		if(rem==vc[i])
		{
			counter++;
		}
	}
	
	if(rem==10)
	{
		cout<<counter-1<<endl;
		return 0;
	}
	
	cout<<counter<<endl;
	
	
	
	
	
	
	
	
	
	
	
	
	   
	
	return 0;
}
 
