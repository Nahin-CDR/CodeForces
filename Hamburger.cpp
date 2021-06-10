// Nahin The Coder
//Date : 10-06-2021

#include<bits/stdc++.h>
#define ll long long int
#define s(v) v.size()
using namespace std;
int main()
{
    string str;
    cin>>str;
    
    ll b=0,c=0,s=0,nb,nc,ns,pb,pc,ps;
    cin>>nb>>ns>>nc>>pb>>ps>>pc;
    ll r;
	cin>>r;
	
    for(int i=0;i<s(str);i++)
    {
        if(str[i]=='B')b++;
        if(str[i]=='C')c++;
        if(str[i]=='S')s++;
    }
    ll count=0;
    if(b==0)nb=0;
    if(c==0)nc=0;
    if(s==0)ns=0;
   
    while(nb!=0 || nc!=0 || ns!=0)
    {
        if(b>0)
        {
            if(nb>=b)
			{
			    nb = nb - b;
			}
            else 
			{
			    r = r - (b-nb)*pb;
				nb = 0;
			}
            if(r<0)
			{
			    cout<<count;
				return 0;
			}
        }
        if(s>0)
        {
            if(ns>=s)
			{
			    ns = ns - s;
			}
            else 
			{  
			    r = r - (s-ns)*ps;
				ns = 0;
			}
            if(r<0)
			{    
			    cout<<count;
				return 0;
			}
        }
        if(c>0)
        {
            if(nc>=c)
			{    
			    nc = nc - c;
			}
            else 
			{
			    r  = r - (c-nc)*pc;
				nc = 0;	
			}
            if(r<0)
			{      
			    cout<<count;
				return 0;
			}
        }
        count++;
    }
    count = count + r/(b*pb+c*pc+s*ps);
    cout<<count;
 
}
