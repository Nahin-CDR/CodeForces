#include<bits/stdc++.h>
using namespace std;

//Solver :  Nahin the Coder
//Date   : 30 - 01 - 2021



int main()
{
    int len;
    cin>>len;
    
    int arr[len];
    
    for(int i=0; i<len; i++)
    {
    	cin>>arr[i];
	}
    
    int mini =  abs(arr[0]-arr[len-1]);
    bool state = true;
    int first,last;
    
   
    
    for(int i=0; i<len-1; i++)
    {
    	int min;
    	min = abs(arr[i]-arr[i+1]);	
        if(mini>=min)
        {
        	mini = min;
        	first = i+1,
        	last = i+2;
		}
	}
	
	int check = abs(arr[0]-arr[len-1]);
	if(mini>=check)
    {
        first = len,
        last = 1;
	}

	cout<<first<<" "<<last<<endl;

	
	


	
	return 0;
}
