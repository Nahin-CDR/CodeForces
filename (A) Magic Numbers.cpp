#include<bits/stdc++.h>
using namespace std;
 
// Solver : Nahin the Coder
// Date   : 02- 02 - 2021
 
 
int main()
{
    string number;
    cin>>number;
    
    
    int len = number.size();
    
    char arr[len];
    
    stringstream ss(number);
    
    bool ok = true;
    
    int i = 0;
    
    char a;
    while(ss>>a)
    {
    	arr[i++] = a;
    	if(a != '1' and a != '4')
    	{
    		ok = false;
		}
	}
	
	if(ok==false)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	
	if(arr[0]=='4')
	{
		cout<<"NO"<<endl;
		return 0;
	}
	
	for(int j = 0; j<len-1; j++)
	{
		if(arr[j]=='4' and arr[j+1]=='4')
		{
			if(arr[j-1] != '1')
			{
				cout<<"NO"<<endl;
				return 0;
			}
		}
		
		if(arr[j]=='4' and arr[j-1] == '4')
		{
			if(arr[j+1] =='4')
			{
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	
	cout<<"YES"<<endl;
 
    return 0;
}
