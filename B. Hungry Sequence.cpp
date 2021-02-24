#include<bits/stdc++.h>
using namespace std;
 
//Solver : Nahin the Coder
//Date   : 24-02-2021 
 
bool isPrint(int n)
{
	bool result = true;
	
	for(int i=2; i*i<=n; i++)
	{
		if(n%i==0)
		{
			result = false;
			break;
		}
	}
	
	return result;
}
 
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
 
    int n;
    cin>>n;
    int cnt = 2;
    int limit = 0;
    while(true)
    {
    	bool print = isPrint(cnt);
    	if(print)
    	{
    		cout<<cnt<<" ";
    		limit++;
		}
		if(limit==n)
		{
			break;
		}
		cnt++;
	}
    
    	
	return 0;
}
