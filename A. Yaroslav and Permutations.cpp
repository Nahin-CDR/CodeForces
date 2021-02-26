#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 26-02-2021



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin)
	#endif
 
    map<float,float>mp;
    
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
    	float number;
    	cin>>number;
    	mp[number]++;
	}
	
	float limit = floor(n/2) + 1;
	
	for(auto it=mp.begin(); it!=mp.end(); it++)
	{
		float count = it->second;
		
		if(count>limit and n%2!=0)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		if(count>=limit and n%2==0)
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	
	cout<<"YES"<<endl;
	
	
	
	
    
		
	return 0;
}
