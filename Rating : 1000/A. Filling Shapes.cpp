//Author : Nahin the Coder
//Date : 27-10-2021

#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

    long long n;
	cin>>n;
	if(n&1)
	{
		cout<<0<<endl;
	}
	else
	{
		cout<<(1<<n/2)<<endl;
	}
	
		
    return 0;
}
