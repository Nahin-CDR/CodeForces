#include<bits/stdc++.h>
using namespace std;
 
// Solver : Nahin the Coder
// Date   : 06-02-2021
 
 
int minCounter = 0;	
 
int p = 0;
 
int isRemaining(int arr[],int len,int value,int popl)
{
	bool complete = false;
	
	int people = 0;
	while(value!=0)
	{
		minCounter = minCounter + value;
		value--;
		p++;
		people++;
		if(p==popl)
		{
			complete = true;
			break;
		}
	}
	if(complete==true)
	{
		return popl;
	}
	else
	{
		return people;
	}
	
}
 
 
 
 
 
int main()
{
    int people,plane;
    cin>>people>>plane;
    
    
    int arr[plane];
    int ar[plane];
    
    for(int i=0; i<plane; i++)
    {
    	cin>>arr[i];
    	ar[i] = arr[i];
	}
    
    
    
    
    
    sort(ar,ar+plane);
    
    
    //calculating MAXIMUM
    int maxCounter = 0;
    int ppl = people;
    
    while(ppl--)
    {
    	sort(arr,arr+plane,greater<int>());
    	maxCounter = maxCounter + arr[0];
    	arr[0]--;
	}
    
	cout<<maxCounter<<" ";
	
    	
    
	
    int peopleCounter = 0;
    //Calculating MINIMUM
    while(true)
    {
    	for(int i=0; i<plane; i++)
    	{
    		int cnt = isRemaining(ar,plane,ar[i],people);
			peopleCounter = peopleCounter + cnt;
			if(cnt==people)
			{
				goto level_out;
			}
			if(peopleCounter==people)
    		{
    			goto level_out;
			}
		}
	}
    level_out:
    	cout<<minCounter;
    
    
    
    
	return 0;
}
