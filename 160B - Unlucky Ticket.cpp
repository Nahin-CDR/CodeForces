#include<bits/stdc++.h>
using namespace std;
 
//Solver : Nahin the Coder
//Date   : 02-03-2021
 
 
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin)
	#endif
	
	int n;
	string str;
	cin>>n;
	cin>>str;
	
	int len = n*2;
	
	char arr[len];
	
	strcpy(arr,str.c_str());
	
	int arr1[n];
	int arr2[n];
	
	int cnt1 = 0;
	int cnt2 = 0;
	
	for(int i=0; i<n*2; i++)
	{
		if(i<n)
		{
			arr1[cnt1] = arr[i];
			arr1[cnt1]  = arr1[cnt1] - '0';
			cnt1++;
		}
		else
		{
			arr2[cnt2] = arr[i];
			arr2[cnt2] = arr2[cnt2] - '0';
			cnt2++;
		}
	}
	
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    
    bool ans = true;
    
    if(arr1[0]==arr2[0])
    {
    	cout<<"NO"<<endl;
	}
    
    if(arr1[0]>arr2[0])
    {
    	for(int i=0; i<n; i++)
        {
    	    if(arr1[i]<=arr2[i])
    	    {
    	    	ans = false;
			}
	    }
	    if(ans)
	    {
	    	cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		return 0;
	}
	
	if(arr1[0]<arr2[0])
    {
    	for(int i=0; i<n; i++)
        {
        	if(arr1[i]>=arr2[i])
    	    {
    	    	ans = false;
			}
		}
		
		if(ans)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	    
		return 0;
	}
    
	
   

    
    
	
		
	return 0;
}
