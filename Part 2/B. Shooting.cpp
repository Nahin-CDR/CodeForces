//Solver : Nahin the Coder
//Date   : 23 - 08 - 2021
#include <bits/stdc++.h>
using namespace std;



int main() 
{
    ios::sync_with_stdio(false);  
    cin.tie(0);
    
	int n;
	cin>>n;
    vector<pair<int,int>>vc;
    for(int i=1; i<=n; i++)
    {
    	int k;cin>>k;
    	vc.push_back({k,i});
	}
	sort(vc.begin(),vc.end());
	
	int counter = 0;
	int sum = 0;
	for(int i=n-1; i>=0; i--)
	{
		if(i==n-1)
		{
			sum = sum + 1;
			counter = counter + 1;
		}
		else
		{
			sum = sum + (vc[i].first*counter+1);
			counter++;
		}
	}
	cout<<sum<<"\n";
	for(int i=n-1; i>=0; i--)
	{
	    cout<<vc[i].second<<" ";
	}
    return 0;
}
