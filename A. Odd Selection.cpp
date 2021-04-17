#include <iostream>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    #ifdef _DEBUG
    freopen("input.txt","r",stdin);
    #endif
    
    int test;
    
    cin>>test;
    
    while(test--)
    {
    	int len,x;
    	cin>>len>>x;
    	int even = 0;
    	int odd = 0;
    	for(int i=0; i<len; i++)
    	{
    		int k;
    		cin>>k;
    		if(k%2==0)
    		{
    			even++;
			}
			else
			{
				odd++;
			}
		}
		if(even !=0 and odd>0)
		{
			if(x==len and odd%2==0)
			{
				cout<<"No"<<endl;
			}
			else
			{
				cout<<"Yes"<<endl;
			}	
		}
		else if(even==0 and x<=odd)
		{
			if(len==odd and x%2==0)
			{
				cout<<"No"<<endl;
			}
			else
			{
				cout<<"Yes"<<endl;
			}
		}
		else if(x==odd and odd%2 != 0)
		{
			cout<<"Yes"<<endl;
		}
		else if(even>=x and odd>0)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
    
    
    
    
    
    return 0;
}
