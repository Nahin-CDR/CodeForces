/*
Read,in the Name of your Lord Who created
created humans from a clinging clot.
Read ! And your Lord is the Most Generous,
Who taught by the pen—
taught humanity what they knew not.

-The holy Quran
*/
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
	int test;
	cin>>test;
	
	while(test--)
	{
		ll c1,c2,c3;
		cin>>c1>>c2>>c3;
		
		ll paper_waste,plastic_waste,anything_waste;
		ll partial_paper_waste;
		ll partial_plastic_waste;
		
		cin>>paper_waste>>plastic_waste>>anything_waste>>partial_paper_waste>>partial_plastic_waste;
		
		if(anything_waste>c3)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			if(c1<paper_waste)
			{
				cout<<"NO"<<endl;
				continue;
			}
			if(c2<plastic_waste)
			{
				cout<<"NO"<<endl;
				continue;
			}
			
			
			
			ll remaining_space = c3 - anything_waste;
			ll total_paper = paper_waste + partial_paper_waste;
			ll total_plastic = plastic_waste + partial_plastic_waste;
			
			ll remaining_paper;
			if(c1 >= total_paper)
			{
				remaining_paper = 0; 
			}
			else
			{
				remaining_paper = total_paper - c1;
			}
			
			ll remaining_plastic;
			if(c2 >= total_plastic)
			{
				remaining_plastic = 0 ;
			}
			else
			{
				remaining_plastic = total_plastic - c2;
			}
			
			ll last = remaining_plastic + remaining_paper;
			if(last <= remaining_space)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}	
		}
	}
 
    return 0;
}
