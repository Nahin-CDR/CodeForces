#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin the Coder
//Date   : 23 - 01 - 2021



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
    freopen("input.txt","r",stdin);
	#endif
	
	vector<int>v1;
	vector<int>v2;
	
	int n;
	
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a;
		cin>>b;
		v1.push_back(a);
		v2.push_back(b);
	}
	
	int left_0 = 0;
	int right_0 = 0;
	int left_1 = 0;
	int right_1 = 0;
	
	
	for(int i=0; i<v1.size(); i++)
	{
		if(v1[i] == 0)
		{
			left_0 = left_0 + 1;
		}
		if(v1[i] == 1)
		{
			left_1 = left_1 + 1;
		}
		if(v2[i] == 0)
		{
			right_0 = right_0 + 1;
		}
		if(v2[i] == 1)
		{
			right_1 = right_1 + 1;
		}
	}
	
	int left = min(left_0,left_1);
	int right = min(right_0,right_1);
	
	int result = left+right;
	
	cout<<result<<endl;
	
	
	
		
	
	return 0;
}

