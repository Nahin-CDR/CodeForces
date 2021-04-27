#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin The Coder
//Date  : 27-04-2021

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
    
    int n;
    cin>>n;
    
    vector<int>v;
    for(int i=0; i<n; i++)
    {
    	int f;
    	cin>>f;
    	v.push_back(f);
	}
    
    sort(v.begin(),v.end());
    
    
    
    
    int cnt = 0;
    bool sorted = true;
    
    for(int i=1; i<=n; i++)
    {
    	if(i!=v[cnt++])
    	{
    		sorted = false;
    		cout<<i<<endl;
    		return 0;
		}
	}
    
   
    
    if(n==1)
    {
    	cout<<v[0]+1;
    	return 0;
	}
    
    if(sorted == true)
    {
    	cout<<v[n-1]+1;
    	return 0;
	}
    
    
   
	
	
	
	return 0;
}
