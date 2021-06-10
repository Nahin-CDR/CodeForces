#include<bits/stdc++.h>
 
 
//Date   : 24-03-2021
 
using namespace std;
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
	long long m = 1000000007;
	
	long long f[6];
	long long n;
	cin>>f[1]>>f[2]>>n;
	
	f[0] = f[1] - f[2];
	f[3] = f[2] - f[1];
	f[4] = -f[1];
	f[5] = -f[2];
	
	cout<<(((f[n%6])%m)+m)%m;
	
	
	return 0;
}
