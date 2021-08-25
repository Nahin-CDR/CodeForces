// read in the name of your Lord who created you
#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int test;cin>>test;
	while(test--)
	{
		int n;cin>>n;
		vector<int>vc(n);
		for(int i=0; i<n; i++)
		{
			cin>>vc[i];
		}
		int counter = 0;
		while(!is_sorted(vc.begin(),vc.end()))
		{
			for(int i = counter%2; i+1<n; i += 2)
			{
				//cout<<i<<" ";
				if(vc[i] > vc[i+1])
				{
					swap(vc[i],vc[i+1]);
				}
			}
			//cout<<"\n";
			counter++;
		}
		cout<<counter<<endl;
	}
	return 0;
}
