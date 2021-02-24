#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 24-02-2021



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin)
	#endif
	
	string w1,w2;
	
	cin>>w1>>w2;
	
	string a,b;
	a = w1;
	b = w2;
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	
	if(a!=b)
	{
		cout<<"NO"<<"\n";
		return 0;
	}
    
	
	if(w1.size()!=w2.size())
	{
		cout<<"NO"<<endl;
		return 0;
	}
	


    int cnt = 0;
    for(int i=0; i<w1.size(); i++)
    {
    	if(w1[i] != w2[i])
		{
		   cnt++;
		}
	}
	
	if(cnt==2)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
    
    
    
    
    
    
		
	return 0;
}
