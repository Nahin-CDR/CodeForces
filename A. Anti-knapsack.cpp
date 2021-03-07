#include<bits/stdc++.h>
using namespace std;
 
 
//Solver : Nahin the Coder
//Date   : 06-03-2021
vector<int>vc;
 
 
 
int main()
{
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int testcase;
	cin>>testcase;
	
	while(testcase--)
	{
		int n,k;
		cin>>n>>k;
	    int limit = k/2;
	    if(limit==1 and k%2==0)
	    {
	    	for(int i=1; i<=n; i++)
	    	{
	    		if(i==k)
	    		{
	    			continue;
				}
				else
				{
					vc.push_back(i);
				}
			}
		}
		else
		{
			int in = k;
			while(limit--)
			{
				in = in-1;
				vc.push_back(in);
			}
			for(int i=k+1; i<=n; i++)
			{
				vc.push_back(i);
			}
		}
		
		
		int size = vc.size();
		if(size==0)
		{
			cout<<0<<"\n";
		}
		else
		{
			cout<<size<<"\n";
			for(int i=0; i<vc.size(); i++)
			{
				cout<<vc[i]<<" ";
			}
			cout<<"\n";
		}
		
		
		vc.clear();
		
	}
	
 
	
 
	
	return 0;
}
