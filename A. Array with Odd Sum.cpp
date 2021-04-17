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
    	cin>>len;
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
	    if(even>0 and odd>0)
	    {
	    	cout<<"YES"<<endl;
		}
		else if(odd==len and odd%2!=0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
    
    
    
    
    
    return 0;
}
