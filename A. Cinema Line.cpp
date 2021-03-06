#include<bits/stdc++.h>
using namespace std;
 
 
//Solver : Nahin the Coder
//Date   : 06-03-2021
 
 
 
int main()
{
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int t5 = 0;
	int ft = 0;
	int h100 = 0;
	bool ans = true;
    int n;
    cin>>n;
    
    int arr[n];

    for(int i=0; i<n; i++)
    {
    	cin>>arr[i];
    	if(arr[i]==25)
    	{
    		t5++;
		}
		if(arr[i]==50)
		{
			if(t5>0)
			{
				t5--;
			    ft++;
			}
			else
			{
				ans = false;
			}
		}
		if(arr[i]==100)
		{
			if(t5>0 and ft>0)
			{
				ft--;
				t5--;
			}
			else if(ft==0 and t5>=3)
			{
				t5 = t5 - 3;
			}
			else if(ft==0 and t5<3)
			{
				ans = false;
			}
			else if(ft>=0 and t5<=0)
			{
				ans = false;
			}
		}
	}
	
	if(ans==true)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	

	

	
	return 0;
}
