#include <bits/stdc++.h>
using namespace std;
 
//Solver: Nahin the Coder;
//Date  : 14-02-2021
 
 
int main()
{
 
   ios::sync_with_stdio(false);
   cin.tie(0);
   
   #ifdef _DEBUG
   freopen("input.txt","r",stdin);
   #endif
	
   int len,x1,y1,x2,y2;
   
   string str;
   cin>>len>>x1>>y1>>x2>>y2;
   cin>>str;
   
   int res = -1;
    
   for(int i=0; i<len; i++)
   {
        switch(str[i])
   	    {
   	        case 'E':
			   if(x1<x2)
			   {
			       x1++;	
			   }
			   break;
			case 'S':
			   if(y1>y2)
			   {
			       y1--;	
			   }
			   break;
			
			case 'W':
			    if(x1>x2)
				{
				    x1--;	
				}
				break;
			case 'N':
			    if(y1<y2)
				{
					y1++;
			    }
				break;
			default:
			    break;	      	
		}
		if(x1==x2 and y1==y2)
		{
			res = i+1;
			break;	
		}
   }
	
   cout<<res;
   
   return 0;
}
