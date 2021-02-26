#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 26-02-2021



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin)
	#endif

    string str;
    cin>>str;
    
    int len = str.size();
    int cnt = 0;
    char ch[len];
    bool delt = true;
    
    for(int i=0; i<str.size(); i++)
    {
    	if(str[i]=='0' and delt == true)
    	{
    		delt = false;
    		continue;
		}
		else
		{
			ch[cnt++] = str[i];
		}
	}
	
	if(delt==true)
	{
		for(int i=0; i<len-1; i++)
		{
			cout<<ch[i];
		}
	}
    else
    {
    	for(int i=0; i<cnt; i++)
    	{
    		cout<<ch[i];
		}
	}
    
    
		
	return 0;
}
