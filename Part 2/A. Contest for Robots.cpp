//Solver : Nahin the Coder
//Date   : 14 - 08 - 2021
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int len;
	cin>>len;
	
	int robo_one = 0;
	
	int robo[len];
	int bio[len];
	
	
	for(int i=0; i<len; i++)
	{
		cin>>robo[i];
		if(robo[i]==1)
		{
			robo_one++;
		}
	}
	
	
	int bio_one = 0;
	
	for(int i=0; i<len; i++)
	{
		cin>>bio[i];
		if(bio[i]==1)
		{
			bio_one++;
		}
	}
	
	bool checker = false;
	
	
	int cnt1 = 0;
	int cnt2 = 0;
	
	if(bio_one == 0 and robo_one==0)
	{
		cout<<-1<<endl;
		return 0;
	}
    else if(bio_one == len)
	{
		cout<<-1<<endl;
		return 0;
	}
	else if(robo_one > bio_one )
	{
		cout<<1<<endl;
		return 0;
	}
	else
	{
		for(int i=0; i<len; i++)
		{
			if(robo[i] == 1 and bio[i] == 0)
			{
				cnt1++;
			}
			if(robo[i] ==0 and bio[i]==1)
			{
				cnt2++;
			}
		}
	}
	
	if(cnt1==0)
	{
		cout<<-1;
		return 0;
	}
	cout<<(cnt2+1+cnt1-1)/cnt1;
	
	return 0;
}
