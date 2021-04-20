#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int test;
	cin>>test;
	
	while(test--)
	{
		bool check = true;
		int n;
		cin>>n;
		for(int i=0; i<n; i++)
		{
			double k;
			cin>>k;
			double res = sqrt(k);
			int test = int(res);
			if(res != test)
			{
				check = false;
			}
		}
		if(check)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
	
	return 0;
}
