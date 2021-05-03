#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin CDR
//Date   : 03-05-2021


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	
	int n;
	cin>>n;
	
	vector<int>vc;
	
	for(int i=0; i<n; i++)
	{
		int k;
		cin>>k;
		vc.push_back(k);
	}
	
	sort(vc.begin(),vc.end());
	
	if(vc.size()<=2)
	{
		cout<<vc[n-1]<<" "<<vc[0]<<endl;
		return 0;
	}
	
	cout<<vc[n-1]<<" ";
	
	for(int i=1; i<n-1; i++)
	{
		cout<<vc[i]<<" ";
	}
	cout<<vc[0]<<endl;
	
	
	
	
	
	return 0;
}
