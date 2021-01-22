#include<bits/stdc++.h>

using namespace std;

// Solver : Nahin the Coder 
//Date    : 22 - 01 - 2021



int main()
{
	    
	    ios::sync_with_stdio(false);
	    cin.tie(0);
	    
	    #ifdef _DEBUG
	    freopen("input.txt","r",stdin);
	    #endif
		
		
		int n;
	    cin>>n;
	

		int arr[n];
		for(int i=0; i<n; i++)
		{
			arr[i] = i+1;
		}
		
		if(n%2 == 0)
		{
			int len = n/2;
			
			int arrOdd[len];
			int arrEven[len];
			
			int oddCount = 0;
			int evenCount = 0;
			
			for(int i=0; i<n; i++)
			{
				if(i%2 != 0)
				{
					arrOdd[oddCount++] = arr[i];
				}
				else
				{
					arrEven[evenCount++] = arr[i];
				}
			}
			
			int cnt1 = 0;
			int cnt2 = 0;
			
			for(int i=0; i<n; i++)
			{	
				if(i%2==0)
				{
					cout<<arrOdd[cnt2++];
				}
				else
				{
					cout<<arrEven[cnt1++];	
				}
				if(i!=n-1)
				{
					cout<<" ";
				}
			}
			
		}
		else
		{
			cout<<-1;
		
		}
	
	
	return 0;
}
