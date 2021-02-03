#include<bits/stdc++.h>
using namespace std;
 
// Solver : Nahin the Coder
// Date  : 03 - 02 - 2021
 
int main()
{
    int n1,n2;
    
    cin>>n1;
    int ar[n1];
    
    for(int i=0; i<n1; i++)
    {
    	cin>>ar[i];
	}
	
	cin>>n2;
	int arr[n2];
	
	for(int i=0; i<n2; i++)
	{
		cin>>arr[i];
	}
	
	
	
	int maxArr[1000];
	int index = 0;
	
	for(int i=0; i<n1; i++)
	{
		int max = 0;
		for(int j=0; j<n2; j++)
		{
			if(arr[j]%ar[i]==0)
			{
				int res = arr[j]/ar[i];
				if(res>max)
				{
				    max = res;	
				} 
			}
		}
		maxArr[index++] = max;
	}
	
	sort(maxArr,maxArr+index);
	
	int maximum = maxArr[index-1];
	
 
	int output = 1;
	
	for(int i=0; i<index-1; i++)
	{
		if(maximum==maxArr[i])
		{
			output++;
		}
	}
	
	cout<<output<<endl;
	
	
	
	return 0;
	
}
