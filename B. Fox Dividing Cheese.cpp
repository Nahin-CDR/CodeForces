//Solver : Nahin The Coder
//Date : 18-06-2021

#include<bits/stdc++.h>
using namespace std;


//we will store here division result
vector<long long>first;
vector<long long>second;
    



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

    long long a,b;

	//taking input
	cin>>a>>b;

    //checking if 2 numbers are equal then no need to do operation
    if(a==b)
	{
		cout<<0<<endl;
		return 0;
	}	
	
	long long sum1 = 0;
	long long sum2 = 0;
	
	//Operation for ****** 2 *******
	long long toCounter1 = 0;
	long long toCounter2 = 0;
	bool run1 = true;
	while (run1)
	{
		if(a%2 == 0)
		{
			a = a/2;
            toCounter1++;
			sum1++;
		}
		if(b%2 == 0)
		{
			b = b/2;
			toCounter2++;
			sum2++;
		}
		if(a%2 != 0 and b%2 != 0)
		{
			first.push_back(toCounter1);
			second.push_back(toCounter2);
			run1 = false;
		}
	}


    //Operation for ******** 3 ******

    long long threeCounter1 = 0;
	long long threeCounter2 = 0;
	bool run2 = true;

	while(run2)
	{
		if(a%3 == 0)
		{
			a = a/3;
			threeCounter1++;
			sum1++;
		}
		if(b%3 == 0)
		{
			b = b/3;
			threeCounter2++;
			sum2++;
		}
		if(a%3 != 0 and b%3 != 0)
		{
            first.push_back(threeCounter1);
			second.push_back(threeCounter2);
			run2 = false;
		}
	}
    
	//Operation for *********** 5 ************
	bool run3 = true;
	long long fiveCounter1 = 0;
	long long fiveCounter2 = 0;

    while(run3 == true)
	{
		if(a%5 == 0)
		{
			a = a/5;
			fiveCounter1++;
			sum1++;
		}
		if(b%5 == 0)
		{
			b = b/5;
            fiveCounter2++;
			sum2++;
		}
		if(a%5 != 0 and b%5 != 0)
		{
			first.push_back(fiveCounter1);
			second.push_back(fiveCounter2);
			run3 = false;
		}
	}

   
    if(a != b)
    {
    	cout<<-1<<endl;
    	return 0;
	}

    cout<<abs(first[0] - second[0]) + abs(first[1] - second[1]) + abs(first[2] - second[2])<<endl;


	return 0;
}
