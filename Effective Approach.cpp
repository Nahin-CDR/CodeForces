#include<bits/stdc++.h>
using namespace std;
 
//Solver : Nahin the Coder
//Date   : 24 - 01 - 2021
 
 
 
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
    freopen("input.txt","r",stdin);
	#endif
	
	
	//inserting main vector array size
    int n;
    cin>>n;
    
    int v[100010];
    
    int k;
    //inserting vector elements
    for(int i=1; i<=n; i++)
    {
    	cin>>k;
    	v[k] = i;
	}
	
	//quires size
	int quires;
	cin>>quires;
	
	//initially they are zero
	long long  vasya = 0; // start search from begining 
	long long  petya = 0; // start search from end
	
	
	
	int j;
	
	//inserting queries
	while(quires--)
	{
		
		cin>>j;
	
		vasya= vasya + v[j];
		petya = petya + n-v[j] + 1;
	}
	
	
 
	
	cout<<vasya<<" "<<petya<<"\n";
		
	
	return 0;
}
 
