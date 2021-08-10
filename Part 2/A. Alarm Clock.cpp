//Solver : Nahin the Coder
//Date   : 10 - 08 - 2021

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
	    long long sleepTime,alarm_1,alarm_2,time_waste;
	    cin>>sleepTime>>alarm_1>>alarm_2>>time_waste;
	    if(sleepTime <= alarm_1)
	    {
	    	cout<<alarm_1<<endl;
		}
		else if(time_waste >= alarm_2)
		{
			cout<<-1<<endl;
		}
		else
		{
			long long rem1 = sleepTime-alarm_1;
			if(alarm_2-time_waste >= rem1)
			{
				cout<<alarm_1+alarm_2<<endl;
			}
			else
			{
				long long sleep = alarm_2-time_waste;
				long long required_time = (rem1+sleep-1)/sleep;
				long long result = alarm_1 + alarm_2*required_time;
				cout<<result<<endl;
			}
		}	
	}
	
	return 0;
}
