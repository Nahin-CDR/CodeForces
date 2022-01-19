//Author : Nahin the Coder
//Date : 19-01-2022

#include<bits/stdc++.h>
using namespace std;




int main()
{
	
	int test; cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		char arr[n][n];

		for(int i=0; i<n; i++)
		{
			for(int j=0; j<n; j++)
			{
				cin>>arr[i][j];
			}
		}
        
		int l = n-1;

		char a = arr[0][1];
		char b = arr[1][0];

		char c = arr[l-1][l];
		char d = arr[l][l-1];
        
	    if(a==b and a == '0')
		{
			if(d == '0' and c != '0')
			{
				cout<<1<<endl;
				cout<<n<<" "<<n-1<<endl;
			}
			else if(d != '0' and c == '0')
			{
				cout<<1<<endl;
				cout<<n-1<<" "<<n<<endl;
			}
			else if(d == '0' and c == '0')
			{
				cout<<2<<endl;
				cout<<n<<" "<<n-1<<endl;
				cout<<n-1<<" "<<n<<endl;
			}
			else if( d != '0' and c != '0')
			{
				cout<<0<<endl;
			}
			else
			{
				cout<<"fuck"<<endl;
			}
		}
		else if(a==b and a == '1')
		{
			if(c == '1' and d != '1')
			{
				cout<<1<<endl;
				cout<<n-1<<" "<<n<<endl;
			}
			else if(c != '1' and d == '1')
			{
				cout<<1<<endl;
				cout<<n<<" "<<n-1<<endl;
			}
			else if(c == '1' and d == '1')
			{
				cout<<2<<endl;
				cout<<n<<" "<<n-1<<endl;
				cout<<n-1<<" "<<n<<endl;
			}
			else if( c != '1' and d != '1')
			{
				cout<<0<<endl;
			}
			else
			{
				cout<<"fuck";
			}
		}
		else if(a == '1' and b == '0')
		{
			if(c == '1' and d == '1')
			{
				cout<<1<<endl;
				cout<<1<<" "<<2<<endl;
			}
			else if(c == '0' and d == '0')
			{
				cout<<1<<endl;
				cout<<2<<" "<<1<<endl;
			}
			else if(c == '1' and d == '0')
			{
				cout<<2<<endl;
				cout<<2<<" "<<1<<endl;
				cout<<n-1<<" "<<n<<endl;
			}
			else if(c == '0' and d == '1')
			{
				cout<<2<<endl;
				cout<<2<<" "<<1<<endl;
				cout<<n<<" "<<n-1<<endl;
			}
			else
			{
				cout<<"fuck";
			}
		}
		else if(a == '0' and b == '1')
		{
			if(c == '1' and d == '1')
			{
				cout<<1<<endl;
				cout<<2<<" "<<1<<endl;
			}
			else if(c == '0' and d == '0')
			{
				cout<<1<<endl;
				cout<<1<<" "<<2<<endl;
			}
			else if(c == '1' and d == '0')
			{
				cout<<2<<endl;
				cout<<1<<" "<<2<<endl;
				cout<<n-1<<" "<<n<<endl;
			}
			else if(c == '0' and d == '1')
			{
				cout<<2<<endl;
				cout<<1<<" "<<2<<endl;
				cout<<n<<" "<<n-1<<endl;
			}
			else
			{
				cout<<"fuck";
			}
		}
		else
		{
			cout<<"fuck"<<endl;
		}
	}



	return 0;
}

