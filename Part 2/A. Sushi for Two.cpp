//Nahin the coder
//Date : 03-09-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin>>n;
	int counter = 0;
	int same = 0;
	int in;
	int last = -1;
	int sum = 0;
	
	for(int i=1; i<=n; i++)
	{
		cin>>in;
		if(in != last)
		{
			counter = same;
			same = 0;
		}
		same++;
		last = in;
		sum = max(sum,min(counter,same)*2);
	}
	cout<<sum<<endl;
	
	return 0;
}
