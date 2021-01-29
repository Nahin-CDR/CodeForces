#include<bits/stdc++.h>
using namespace std;
 
//Solver : Nahin the Coder 
//Date    : 30 - 01 - 2021


 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);    
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
   int a,b,c;
   cin>>a>>b>>c;
   
   int s1,s2,s3;
   s1 = a*b;
   s2 = b*c;
   s3 = c*a;
   
   int res1,res2,res3;
   res1 = sqrt(s1/c);
   res2 = sqrt(s2/a);
   res3 = sqrt(s3/b);
   
   int result = 4*(res1+res2+res3);
   
   cout<<result<<endl;
   
   
   
   
	
	
	return 0;
}
