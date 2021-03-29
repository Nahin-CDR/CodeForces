#include<bits/stdc++.h>
#define long long int

//Solver : Nahin the Coder
//Date   : 29-03-2021

using namespace std;




int main()
{

	
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=1; i<=n; i++)
    {
    	cin>>arr[i];
	}
    
   
    int left = 1;
    
    for(int i=1; i<n; i++)
    {
    	if(arr[i+1]<arr[i])
    	{
    		left = i;
    		break;
		}
	}
    
    
    int right = 1;
    
    for(int i=1; i<n; i++)
    {
    	if(arr[i+1]<arr[i])
    	{
    		right = i+1;
		}
	}
    
    reverse(arr+left,arr+right+1);
    
    for(int i=1; i<n; i++)
    {
    	if(arr[i]>arr[i+1])
    	{
    		cout<<"no"<<endl;
    		return 0;
		}
	}
    
    cout<<"yes"<<endl;
    cout<<left<<" "<<right;
    
    return 0;
    
}
