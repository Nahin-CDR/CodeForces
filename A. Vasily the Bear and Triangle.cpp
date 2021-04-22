#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 21 - 04 -2021

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
    int x1,x2,y1,y2;
    cin>>x1>>y1;
    
    if(x1>0 and y1>0)
    {
    	//point => A
    	
    	cout<<0<<" "<<x1+y1;
    	
		//point => C
    	
		cout<<" "<<x1+y1<<" "<<0<<endl;
	}
	
	
	
	if(x1<0 and y1>0)
	{
		//point =>A
		
		cout<<x1-y1<<" "<<0;
	    
		//point =>C
		cout<<" "<<0<<" "<<-(x1-y1)<<endl; 
	}
	
	if(x1<0 and y1<0)
	{
		//point => A
		cout<<x1+y1<<" "<<0<<" ";
		//point => C
		cout<<0<<" "<<x1+y1<<endl;
	}
	
	if(x1>0 and y1<0)
	{
		//point => A
		cout<<0<<" "<<-x1+y1<<" ";
		//point =>C
		cout<<x1-y1<<" "<<0<<endl;
	}
	
    
    
	return 0;
}            
