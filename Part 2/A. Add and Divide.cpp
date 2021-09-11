//Solver : Nahin the Coder
//Date   : 11-09-2021

#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
//	std::ofstream outfile;
//	outfile.open("res.txt",std::ios_base::app);
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll test; cin>>test;
	while(test--)
	{
		ll a,b;
		cin>>a>>b;
		if(a==b)
		{
		   cout<<2<<endl;	
		
		}
		else if(b>a)
		{
			cout<<1<<endl;
		}
		else
		{
			ll counter = 0;
			ll mini = 99999999999;
			bool extra = false;
			if(b == 1)
			{
				extra = true;
				b = 2;
				counter = 1;
			}
			for(int i=1; i<=10; i++)
			{
				ll a2 = a;
				while(a2 != 0)
				{
					a2 = a2/b;
					counter++;
				}
				mini = min(mini,counter);
				//cout<<mini<<" "<<b<<"\n\n";
				if(extra == true)
				{
					counter = 1+i;
					b = b+1;
				}
				else 
				{
					counter = i;
					b = b+1;
					//cout<<counter<<" "<<b<<"\n";
				}
			}
			cout<<mini<<endl;
			//outfile<<mini<<endl;
		}	
	}
	
	return 0;
}
