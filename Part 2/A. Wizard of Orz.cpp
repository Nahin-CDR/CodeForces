//Solver : Nahin the Coder
//Date   : 04-08-2021
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        if(n==1)
        {
        	cout<<9<<endl;
		}
        else if(n == 2)
        {
            cout<<98<<endl;
        }
        else if(n == 3)
        {
            cout<<989<<endl;
        }
        else{
        	cout<<989;
        	int counter = 3;
        	int start = 0;
        	while(true)
        	{
        		if(counter == n)
        		{
        			cout<<"\n";
        			break;
				}
				cout<<start;
				counter++;
				if(start == 9)				
				{
					start = -1;
				}
				start++;
			}
		}
    }
    return 0;
}
