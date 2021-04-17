#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 17 - 04 -2021

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("intput.txt","r",stdin);
	#endif
	
    int test;
    cin>>test;
    
    while(test--)
    {
    	long long a,b,c,d;
    	cin>>a>>b>>c;
    	long long x = abs(a-c);
    	long long y = b;
    	long long result = sqrt(x*x+y*y) + 1;
    	cout<<result<<"\n";
	}
	
	return 0;
}
