//Author : Nahin the Coder
//Date : 13-10-2021

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
		cin>>n;
		char arr[n];
		bool one = false;
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			if(arr[i] == '1')
			{
				one = true;
			}
		}
        if(one== false)
		{
			cout<<n<<endl; continue;
		}
		if(arr[0] == '1' or arr[n-1] == '1')
		{
			cout<<n*2<<endl; continue;
		}

        int ans = n;
		for(int i=0; i<n; i++)
		{
			if(arr[i] == '1' )
			{
				ans = max(ans,2*max(i+1,n-i));
			}
			
		}
        
		cout<<ans<<endl;
	}
    return 0;
}
