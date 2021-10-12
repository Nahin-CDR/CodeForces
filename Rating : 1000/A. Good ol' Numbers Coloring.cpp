//Solver : Nahin the Coder
//Date : 12-10-2021

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
		int a,b; cin>>a>>b;
        if(__gcd(a,b)!=1)
		{
			cout<<"Infinite"<<endl;
		}
		else
		{
			cout<<"Finite"<<endl;
		}		
	}

	
    return 0;
}
