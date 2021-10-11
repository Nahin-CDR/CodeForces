#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,z,a;
		cin>>n;
		int ar[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>>ar[i];
		}
	 	for(int i=1;i<=n;i++)
	 	{
	 		z=1;
	 		a=ar[i];
		while(i!=a)
		{
			a = ar[a];
			z = z + 1;
		}
		cout<<z<<" ";
	}
	cout<<endl;
	}
    return 0;
}
