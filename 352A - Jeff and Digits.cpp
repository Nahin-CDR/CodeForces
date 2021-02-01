#include<bits/stdc++.h>
using namespace std;

// Solver : Nahin the Coder
// Date   : 01- 02 - 2021


int main()
{
    int n;
    cin>>n;
   
    int arr[n];
    
    bool zero = false;
    int fiveCounter = 0;
    int zeroCounter = 0;
    
    for(int i=0; i<n; i++)
	{
		cin>>arr[i];
		if(arr[i]==0)
		{
			zero = true;
			zeroCounter++;
			
		}
		else
		{
			fiveCounter++;
		}
	}
	
	
	int resFive = (fiveCounter/9)*9;
	

	if(zero == true and fiveCounter<9)
	{
		cout<<0<<endl;
	}
	else if(zero == true and fiveCounter>=9)
	{
		for(int i=0; i<resFive; i++)
		{
			cout<<5;
		}
		for(int i=0; i<zeroCounter; i++)
		{
			cout<<0;
		}
	}
    else
	{
		cout<<-1<<endl;
	}
	
	
	

    
    return 0;
}
