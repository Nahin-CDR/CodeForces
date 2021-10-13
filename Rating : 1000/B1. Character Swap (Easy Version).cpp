//Author : Nahin the Coder
//Date : 13-10-2021

#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int test;
	cin>>test;
	while(test--)
	{
		int n; cin>>n;
		char arr1[n];
		char arr2[n];
		for(int i = 0; i < n; i++)
		{
			cin>>arr1[i];
		}
		for(int i = 0; i < n; i++)
		{
			cin>>arr2[i];
		}
        int diff = 0;
        //string st[1000];
    char s1[2];   
		char s2[2];
   int cnt=0;
		for(int i = 0; i < n; i++)
		{
			if(arr1[i] != arr2[i] and cnt==0)
			{
				s1[0] = arr1[i];
       s1[1] = arr2[i];
				cnt++;
				diff++;
			}
     else if(arr1[i]!= arr2[i] and cnt==1)
     {
         s2[0]=arr1[i];
         s2[1] =arr2[i];
         diff++;
         cnt++;
     }
     else if(arr1[i]!= arr2[i])
     {
         diff++;
     }
     
		}
        if(diff==2)
		{
			if(s1[0]==s2[0] and s1[1] == s2[1])
			{
			    cout<<"Yes"<<endl;	
         //cout<<s1<<" "<<s2;
			}
			else
			{
				cout<<"No"<<endl;
			}
			
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
    return 0;
}
