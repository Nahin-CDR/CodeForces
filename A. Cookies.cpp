#include<bits/stdc++.h>
using namespace std;
 
//Solver : Nahin the Coder
//Date   : 11- 04 - 2021
 
 
int main()
{
  
	int n;
	cin>>n;
	
	vector<int>vc;
	
	int sum = 0;
	
	for(int i=0; i<n; i++)
	{
		int k;
		cin>>k;
		vc.push_back(k);
		sum = sum + k;
	}
	
	
	int counter = 0;
	
	for(int i=0; i<vc.size(); i++)
	{
		if((sum-vc[i])%2==0)
		{
			counter++;
		}
	}
	
	
	cout<<counter<<endl;
	
	
	
	
	
	   
	
	return 0;
}
 
