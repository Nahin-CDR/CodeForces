//Solver : Nahin the Coder
//Date   : 14 - 08 - 2021
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
		int a,b,c;
		cin>>a>>b>>c;
		int counter = 0;
	
	    bool abc=false;
		if((a>0 and b>0) and c>0)
		{
			abc=true;
			counter = counter+3;
			a--;
			b--;
			c--;
		}
		
		bool ab=false;
		bool bc=false;
		bool ac=false;
		
		
		if(a>b and a>c)
		{
			if((a>0 and b>0) and c>0)
			{
				if(b>=c)
				{
					a--;
					b--;
					counter++;
					ab=true;
				}
			}
		}
		if(a>b and a>c)
		{
			if((a>0 and b>0) and c>0)
			{
				if(c>b)
				{
					a--;
					c--;
					counter++;
					ac=true;
				}
			}
		}
		if(b>a and b>c)
		{
			if((a>0 and b>0) and c>0)
			{
				if(a>=c and ab==false)
				{
					a--;
					b--;
					counter++;
					ab=true;
				}
			}
		}
		if(b>a and b>c)
		{
			if((a>0 and b>0) and c>0)
			{
				if(c>a and bc==false)
				{
					b--;
					c--;
					counter++;
					bc=true;
				}
			}
		}
		if(c>a and c>b)
		{
			if((a>0 and b>0) and c>0)
			{
				if(a>=b and ac==false)
				{
			        a--;
					c--;
					counter++;
					ac=true;
				}
			}
		}
		
		if(c>a and c>b)
		{
			if((a>0 and b>0) and c>0)
			{
				if(b>a and bc==false)
				{
			        b--;
					c--;
					counter++;
					bc=true;
				}
			}
		}
		
		if(a>0 and b>0)//AB
		{
			if(ab==false and abc == true)
			{
				counter++;
				a--;
				b--;
				ab=true;
			}
		}
		if(b>0 and c>0) //BC
		{
			if(bc==false and abc==true)
			{
				b--;
				c--;
				counter++;
				bc=true;
			}
		}
		if(a>0 and c>0) //CA
		{
			if(ac==false and abc==true)
			{
				a--;
				c--;
				counter++;
				ac=true;
			}
		}
		
		if((a>0 and b>0) and c>0) //ABC
		{
			counter++;
		}
		if(counter==0)
		{
			if((a>0 and b>0) and c==0)
			{
				if(a>=2 and b>=2)
				{
					cout<<3<<endl;
				}
				else
				{
					cout<<2<<endl;
				}
			}
			else if((b>0 and c>0) and a==0)
			{
				if(b>=2 and c>=2)
				{
					cout<<3<<endl;
				}
				else
				{
					cout<<2<<endl;
				}
			}
			else if((a>0 and c>0) and b==0)
			{
				if(a>=2 and c>=2)
				{
					cout<<3<<endl;
				}
				else
				{
					cout<<2<<endl;
				}
			}
			else if(a+b+c>0)
			{
				cout<<1<<endl;
			}
			else
			{
				cout<<counter<<endl;
			}
		}
		else
		{
			cout<<counter<<endl;
		}
	}
	
	
	return 0;
}
