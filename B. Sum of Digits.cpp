#include<bits/stdc++.h>
using namespace std;

//Solver : Nahin The Coder
//Date  : 26-04-2021

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	#ifdef _DEBUG
	freopen("input.txt","r",stdin);
	#endif
    
    string number;
    
    cin>>number;
    
    
    //in that case when input number is less or equal 10
    stringstream ss1(number);
    int x = 0;
    ss1>>x;
    if(x<10)
    {
    	cout<<0<<endl;
    	return 0;
	}
    
    
   
    
    //in that case when input is greater than 10
    
    int count = 0;
    
    while(true)
    {
    	int len = number.size();
    	int sum = 0;
		for(int i=0; i<len; i++)
		{
			int z = number[i] - '0';
			
			sum = sum + z; 
		}
		
		int res = sum;
		
		if(sum<10)
		{
			count++;
			goto level;
		}
		else
		{
			count++;
			number = to_string(res);
		}
	}
    
    level:
    	cout<<count<<endl;
    
    
    
    
    
    
	
	
	
	return 0;
}
