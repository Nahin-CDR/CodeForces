//Solver : Nahin the Coder
//Date : 26-07-2021

#include <bits/stdc++.h>
using namespace std;

int main() 
{
   
    
    int test;
    cin>>test;
    while(test--)
    {
       int n,k;
       string str;
       cin>>n>>k;
       cin>>str;
       if(k==0)
       {
       	    cout<<"yes\n";
       	    continue;
	   }
       int cnt = 0;
       int p = n;
       bool flag = false;
       bool continu = true;
       for(int i=0; i<n; i++)
       {
	        if(str[i] == str[--n])
	        {
	        	cnt++;
			}
		    else
		    {
		    	break;
			}
	   }
	   if(cnt>=k)
	   {
	        if((p-(k*2))>0)
			{
			   cout<<"yes\n";
			}
			else
			{
				cout<<"no\n";
		    }   
	   }
	   else
	   {
	   	    cout<<"no\n";
	   }
    }
    return 0;
}
