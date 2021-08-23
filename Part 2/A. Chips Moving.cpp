//Solver : Nahin the Coder
//Date   : 04-08-2021
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
	cin >> n;
	int x = n;
	int count = 0;
	while(x--)
	{
		int k;cin>>k;
		count = count + (k&1); 
	}
	if(n-count<count)
	{
		cout<<n-count;
	}
	else
	{
		cout<<count;
	}
    
    return 0;
}
