#include<bits/stdc++.h>


//Date   : 23-03-2021

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
	
    vector<int>vc;
    int n,m,d;
    cin>>n>>m>>d;
    
    int len = n*m;
    
    for(int i=0; i<len; i++)
    {
    	int k;
    	cin>>k;
    	vc.push_back(k);
	}
    
    sort(vc.begin(),vc.end());
    
    int sum = 0;
    
    for(int i=0; i<len; i++)
    {
        sum = sum + abs(vc[i]-vc[len/2]);	
	}
	if(sum%d==0)
	{
		cout<<sum/d<<endl;
	}
	else
	{
		cout<<"-1"<<endl;
	}
    
    
    
	
	
	return 0;
}
