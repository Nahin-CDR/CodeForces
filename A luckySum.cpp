#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 30-04-2021


#define ll long long
ll lucky[100000];

int cnt = 1;

ll next(ll n)
{
	while(true)
	{
		if(lucky[cnt]>=n)
		{
			return lucky[cnt];
			break;
		}
		else
		{
			cnt++;
		}
	}
	
	
	
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
	
	//------------storing lucky numbers ----//
	
	lucky[1] = 4;
	lucky[2] = 7;
	int index = 3;
	
	for(int i=1; i<512; i++)
	{
		lucky[index++] = lucky[i]*10+4;
		lucky[index++] = lucky[i]*10+7;
	}
	
	
	
	//------------taking input of starting and ending point---//
	
	
	ll left,right;
	cin>>left>>right;
	
	ll sum = 0;
	
	for(ll i=left; i<=right; i++)
	{
		sum = sum+next(i);
	}
	
	cout<<sum<<endl;
	
	
	return 0;
}
