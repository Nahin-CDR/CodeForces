//Nahin Dcoder
//Date : 03-07-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int test;
	cin>>test;
	
	while(test--)
	{
		int n;
	    vector<int>vc;
	    cin>>n;
	    for(int i=0; i<n; i++)
	    {
	    	int k;
	    	cin>>k;
	    	vc.push_back(k);
		}
		//checking part :
		bool no = true;
		for(int i=1; i<n-1; i++)
		{
			if(vc[i]>vc[i-1] and vc[i]>vc[i+1])
			{
				cout<<"YES"<<endl;
				cout<<i<<" "<<i+1<<" "<<i+2<<endl;
				no = false;
				break;
			}
		}
		if(no==true)
		{
			cout<<"NO"<<endl;
		}	
	}
	
	
	
	
	return 0;
}
