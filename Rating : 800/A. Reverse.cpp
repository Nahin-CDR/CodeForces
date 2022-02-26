
//Solver : Nahin the Coder
//Date : 26-02-2022

#include <bits/stdc++.h>
using namespace std;




int main()
{
	int test; cin>>test;
	while(test--)
	{
		int n; cin>>n;
		int arr[n];
		int temp[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
			temp[i] = arr[i];
		}

		sort(temp,temp+n);
		bool sorted = true;

		for(int i=0; i<n; i++)
		{
			if(temp[i] != arr[i])
			{
				sorted = false;
				break;
			}
		}

		if(sorted == true)
		{
			for(int i=0; i<n; i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<"\n";
		}
		else
		{
			int search;
			int idx;
		
			for(int i=0; i<n; i++)
			{
				if(arr[i] != temp[i] )
				{
					idx = i;
					search = temp[i];
					break;
				}
			}
            //cout<<"idx : "<<idx<<" ";
			auto it = find(arr,arr+n,search);

			int found = distance(arr,it);
            
			//cout<<"found :"<<found<<"\n";

            reverse(arr+idx,arr+found+1);

			for(int i=0; i<n; i++)
			{
				cout<<arr[i]<<" ";
			}
            cout<<"\n";




		}
		
	

	}

	return 0;
}
