#include<bits/stdc++.h>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	cout.tie(0);
	
    string s[4];
    
    for(int i=0;i<4;i++)
    {
        cin>>s[i];
    }
    int cntw=0,cntb=0,count=0;
    
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(s[i][j]=='#') 
			{
				cntb++;
			}
            else 
			{
				cntw++;
			}
			
            if(s[i][j+1]=='#') 
			{
				cntb++;
			}
            else 
			{
				cntw++;
			}
            if(s[i+1][j]=='#') 
			{
				cntb++;
			}
            else 
			{
				cntw++;
			}
            if(s[i+1][j+1]=='#')
			{
				cntb++;
			}
            else 
			{
				cntw++;
			}
            if(cntw>=3 || cntb>=3) 
			{
			    count++; 
				break;
			}
            cntw=0;
            cntb=0;
        }
    }
    if(count>0) 
	{
		cout<<"YES";
	}
    else 
	{
		cout<<"NO";
	}
	
   
    
        
    return 0;
}
