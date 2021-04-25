#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin The Coder
//Date  : 26-04-2021

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif

    int n;
    cin>>n;
    
    vector<int>v1;
    vector<int>v2;
    vector<int>v3;
    
    
    for(int i=0; i<n; i++)
    {
    	int k;
    	cin>>k;
    	if(k<0)
    	{
    		v1.push_back(k);
		}
		if(k>0)
		{
			v2.push_back(k);
		}
		if(k==0)
		{
			v3.push_back(k);
		}
	}
	
	
	if(v1.size()>0 and v2.size()>0)
	{
		if(v3.size()>0)
		{
			if(v1.size()%2==0)
			{
				cout<<v1.size()-1<<" ";
			    for(int i=0; i<v1.size()-1; i++)
			    {
				    cout<<v1[i]<<" ";
			    }
			}
			else
			{
			    cout<<v1.size()<<" ";
			    for(int i=0; i<v1.size(); i++)
			    {
				    cout<<v1[i]<<" ";
			    }	
			}
			
			cout<<"\n";
			cout<<v2.size()<<" ";
			for(int i=0; i<v2.size(); i++)
			{
				cout<<v2[i]<<" ";
			}
			cout<<"\n";
			
			if(v1.size()%2==0)
			{
				cout<<v3.size()+1<<" ";
			    for(int i=0; i<v3.size(); i++)
			    {
				    cout<<v3[i]<<" ";
			    }
			    cout<<v1[v1.size()-1];
			}
			else
			{
				cout<<v3.size()<<" ";
			    for(int i=0; i<v3.size(); i++)
			    {
				    cout<<v3[i]<<" ";
			    }
			}
		}
		return 0;
	}
	
	
    if( v2.size()==0 )
    {
    	int cnt = 0;
    	if(v1.size()%2==0)
    	{
    		cout<<v1.size()-3<<" ";
    	    for(int i=0; i<v1.size()-3; i++)
            {
    		    cout<<v1[i]<<" ";
    		    cnt++;
		    }
		}
		else
		{
			cout<<v1.size()-2<<" ";
    	    for(int i=0; i<v1.size()-2; i++)
    	    {
    		    cout<<v1[i]<<" ";
    		    cnt++;
		    }
		}
    
		cout<<"\n";
		cout<<2<<" ";
		if(v1.size()%2==0)
		{
			for(int i=cnt; i<v1.size()-1; i++)
		    {
			    cout<<v1[i]<<" ";
		    }
		}
		else
		{
			for(int i=cnt; i<v1.size(); i++)
		    {
			    cout<<v1[i]<<" ";
		    }
		}
	
		cout<<"\n";
		
		if(v1.size()%2==0)
		{
			cout<<v3.size()+1<<" ";
		    for(int i=0; i<v3.size(); i++)
		    {
			    cout<<v3[i]<<" ";
		    }
		    cout<<v1[v1.size()-1];
		}
		else
		{
			cout<<v3.size()<<" ";
		    for(int i=0; i<v3.size(); i++)
		    {
			    cout<<v3[i]<<" ";
		    }
		}
	
		return 0;
	}
	
	
	if( v1.size()==0 )
    {
    	cout<<1<<" ";
    	for(int i=0; i<1; i++)
    	{
    		cout<<v2[0]<<" ";
		}
		cout<<"\n";
		cout<<v2.size()-1<<" ";
		for(int i=1; i<v2.size(); i++)
		{
			cout<<v2[i]<<" ";
		}
		cout<<"\n";
		cout<<v3.size()<<" ";
		for(int i=0; i<v3.size(); i++)
		{
			cout<<v3[i]<<" ";
		}
	}
	
	
	
	return 0;
}
