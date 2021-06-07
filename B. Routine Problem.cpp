//Nahin The Coder
//07-06-2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	
	int area1 = a*d;
	int area2 = b*c;
	
	int mx = max(area1,area2);
	int mn = min(area1,area2);

	int dif = mx - mn;
	
	int gcd = __gcd(dif,mx);
	
	cout<<dif/gcd<<"/"<<mx/gcd<<endl;
	
	return 0;
}
