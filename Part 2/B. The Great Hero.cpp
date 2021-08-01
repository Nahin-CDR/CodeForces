//Solver : Nahin the Coder
//Date   : 01 - 08 - 2021

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	

	long long test;
	cin>>test;
	
	
	while(test--)
	{
		long long attack_power,health_value,number_of_monstars;
		cin>>attack_power>>health_value>>number_of_monstars;
		
		vector<pair<long long,long long>>vc(number_of_monstars);
		
		
		long long attack[number_of_monstars];
		long long health[number_of_monstars];
		
		for(long long i=0; i<number_of_monstars; i++)
		{
			cin>>vc[i].first;
			//cin>>attack[i];
		}
		for(long long i=0; i<number_of_monstars; i++)
		{
			cin>>vc[i].second;
			//cin>>health[i];
		}
		
		sort(vc.begin(),vc.end());
		long long round = number_of_monstars;
		
		long long counter = 0;
		long long cnt = 0;//number_of_monstars;
		bool win = false;
		
		while(round>0)
		{
		    if(health_value <=0 ) 
		    {
                win = false;
                break;
            }
            long long k1 = vc[counter].second / attack_power;
            long long k2 = vc[counter].second % attack_power;
            long long k3 = health_value / vc[counter].first;
            long long k4 = health_value % vc[counter].first;
            
			if(k4) k3++;
            if(k2) k1++;
            
            k1 = min(k1,k3);
            health_value = health_value - k1*vc[counter].first;
            vc[counter].second -= k1*attack_power;
            counter++;
			round--;
		}
		
		if(vc[number_of_monstars-1].second <= 0)
		{
			cout<<"YES"<<"\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}
	
	return 0;
}
