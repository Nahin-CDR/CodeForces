//Solver : Nahin the Coder
//Date   : 25 - 06 - 2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	long long n;
	cin>>n;
	string str;
	while(true)
	{
		str = str + "47";
		sort(str.begin(),str.end());
		
		do{
			if(stoll(str)>=n)
			{
				cout<<str<<endl;
				return 0;
			}
		}while(next_permutation(str.begin(),str.end()));
	}
	
	return 0;
}
