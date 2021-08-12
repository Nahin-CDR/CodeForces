// Solver : Nahin the Coder 
// Date : 12 - 08 - 2021
#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int test; cin>>test;
	while(test--)
    {
    	int n,a,b;
    	cin>>n>>a>>b;
    	char arr[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    	int i = 0;
		while(true)
    	{
    		if(n>0)
    		{
    			cout<<arr[i];
    			n--;
				i++;	
				if(i==b)
				{
					i = 0;
				}
			}
			if(n>0 and i==26)
			{
				i=0;
			}
			if(n==0)
			{
				break;
			}
		}
		cout<<"\n";
    }
    
    return 0;
}
