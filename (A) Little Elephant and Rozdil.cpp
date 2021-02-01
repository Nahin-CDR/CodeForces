#include<bits/stdc++.h>
using namespace std;
 
// Solver : Nahin the Coder
// Date   : 31- 01 - 2021
 
 
int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
    	cin>>arr[i];
	}
	
	int min = arr[0];
	
	int count = 0;
	int index = 0;
	
	for(int i=0; i<n; i++)
	{
		if(min>arr[i])
		{
			min = arr[i];
			index = i;
		}
	}
	
	for(int i = 0; i<n; i++)
	{
		if(arr[index]==arr[i])
		{
			count++;
		}
	}
	
	if(count>1)
	{
		cout<<"Still Rozdil"<<endl;
	}
	else
	{
		cout<<index+1<<endl;
	}
    
    return 0;
}
