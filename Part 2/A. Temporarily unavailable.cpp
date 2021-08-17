//Solver : Nahin the Coder
//Date   : 17 - 08 - 2021
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	ll test;
	cin>>test;
	while(test--)
	{
		ll start,end,base,radius;
		cin>>start>>end>>base>>radius;
	
		if(base > start and base < end)
		{
			ll left = base;
			ll right = base;
			ll turn = radius;
			while(turn--)
			{
				left--;
			}
			turn = radius;
			while(turn--)
			{
				right++;
			}
			if(start>end)
			{
				if(right>=start and left<=end)
				{
					cout<<0<<endl;
				}
				else if(right<start and left<=end)
				{
					cout<<abs(start-right)<<endl;
				}
				else if(right>=start and left>end)
				{
					cout<<abs(left-end)<<endl;
				}
				else if(right<start and left>end)
				{
					ll res1 = abs(start-right);
					ll res2 = abs(left-end);
					cout<<res1+res2<<endl;
				}
			}
			else
			{
				if(right>=end and left<=start)
				{
					cout<<0<<endl;
				}
				else if(right<end and left<=start)
				{
					cout<<abs(end-right)<<endl;
				}
				else if(right>=end and left>start)
				{
					cout<<abs(left-start)<<endl;
				}
				else if(right<end and left>start)
				{
					ll res1 = abs(end-right);
					ll res2 = abs(left-start);
					cout<<res1+res2<<endl;
				}
			}
		}
		else if(base<start and base > end)
		{
			ll left = base;
			ll right = base;
			ll turn = radius;
			while(turn--)
			{
				left--; 
			}
			turn = radius;
			while(turn--)
			{
				right++; 
			}
			
			
			if(start>end) 
			{
				if(right>=start and left<=end)
				{
					cout<<0<<endl;
				}
				else if(right<start and left<=end)
				{
					cout<<abs(start-right)<<endl;
				}
				else if(right>=start and left>end)
				{
					cout<<abs(left-end)<<endl;
				}
				else if(right<start and left>end)
				{
					ll res1 = abs(start-right);
					ll res2 = abs(left-end);
					cout<<res1+res2<<endl;
				}
			}
			else
			{
				if(right>=end and left<=start) 
				{
					cout<<0<<endl;
				}
				else if(left>start and right>=end)
				{
					cout<<abs(left-start)<<endl;
				}
				else if(left<=start and right<end)
				{
					cout<<abs(end-right)<<endl;
				}
				else if(left>start and right<end)
				{
					ll res1 = abs(left-start);
					ll res2 = abs(end-right);
					cout<<res1+res2<<endl;
				}
			}
		}
		else if(base == start)
		{
			if(start>end)
			{
			
				ll turn = radius;
				while(turn--)
				{
					base--;
				}
				if(base<=end)
				{
					cout<<0<<endl;
				}
				else if(base==start)
				{
					ll counter=0;
					while(start>end)
					{
						counter++;
						start--;
					}
					cout<<counter<<endl;
				}
				else if(base>end)
				{
					cout<<abs(base-end)<<endl;
				}
			}
			else
			{
				ll turn = radius;
				while(turn--)
				{
					start++;
				}
				if(start>=end)
				{
					cout<<0<<endl;
				}
				else
				{
					cout<<abs(end-start)<<endl;
				}
			}
		}
		else if(base == end)
		{
			ll turn = radius;
			if(start>end)
			{
				while(turn--)
				{
					end++;
				}
				if(end>=start)
				{
					cout<<0<<endl;
				}
				else if(end<start)
				{
					cout<<abs(start-end)<<endl;
				}
			}
			else
			{
				while(turn--)
				{
					end--;
				}
				if(end<=start)
				{
					cout<<0<<endl;
				}
				else if(end>start)
				{
					cout<<abs(end-start)<<endl;
				}
			}
		}
		else if(base<start and base<end)
		{
			
			if(start>end)
			{
				ll turn = radius;
				while(turn--)
				{
					base++;
				}
				if(base>=start)
				{
					cout<<0<<endl;
				}
				else if(base<=end)
				{
					cout<<abs(start-end)<<endl;
				}
				else
				{
					cout<<abs(start-base)<<endl;
				}
			}
			else
			{
				ll turn = radius;
				while(turn--)
				{
					base++;
				}
				if(base>=end)
				{
					cout<<0<<endl;
				}
				else if(base<=start)
				{
					cout<<end-start<<endl;
				}
				else if(base>start)
				{
					cout<<abs(end-base)<<endl;
				}
			}
		}
		else if(base>start and base>end)
		{
			
			ll turn = radius;
			while(turn--)
			{
				base--;
			}
			
			if(start>end)
			{
				if(base>=start)
				{
					cout<<abs(start-end)<<endl;
				}
				else if(base<start and base>end)
				{
					cout<<abs(base-end)<<endl;
				}
				else if(base<=end)
				{
					cout<<0<<endl;
				}
			}
			else
			{
				if(base>=end)
				{
					cout<<abs(end-start)<<endl;
				}
				else if(base<end and base>start)
				{
					cout<<abs(base-start)<<endl;
				}
				else if(base<=start)
				{
					cout<<0<<endl;
				}
			}
		}
	}
	return 0;
}
