//Solver : Nahin the Coder
//Date   : 13-09-2021
#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
	//std::ofstream outfile;
	//outfile.open("output.txt",std::ios_base::app);
	
	ll test;
	cin>>test;
	while(test--)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		ll check = abs(a-b)*2;
		if( a > check or b>check or c>check)
		{
			cout<<-1<<endl;
		}
		else if(abs(a-b)>=c)
		{
			cout<<c+abs(a-b)<<endl;
	    }
		else if(abs(a-b)<c)
		{
			cout<<c-abs(a-b)<<endl;
		}
	}
	return 0;
}
