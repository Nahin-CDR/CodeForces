// Date : 12 - 08 - 2021
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int test; cin>>test;
	while(test--)
    {
    	int n,x,sum=0;
    	cin>>n>>x;
    	set<int>mySet;
    	for(int i=0; i<n; i++)
    	{
    		int p;
    		cin>>p;
    		mySet.insert(p);
		}
		for(int i=1; x>0; i++)
		{
			if(!mySet.count(i))
			{
				x--;
			}
			sum++;
		}
		for(int i = sum+1; mySet.count(i); i++)
		{
			sum++;
		}
		cout<<sum<<endl;
		
		
    }
    
    return 0;
}
